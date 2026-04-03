#include <iostream>
#include <list>
#include <string>
 
using namespace std;
 
class HashTable {
    int size;
    list<pair<int, string>>* table;
 
    int hashFunction(int key) {
        return key % size;
    }
 
public:
    HashTable(int sz) {
        size = sz;
        table = new list<pair<int, string>>[size];
    }
 
    ~HashTable() {
        delete[] table;
    }
 
    void insert(int key, string value) {
        int idx = hashFunction(key);
        for (auto& entry : table[idx]) {
            if (entry.first == key) {
                entry.second = value;
                return;
            }
        }
        table[idx].push_back({key, value});
    }
 
    string search(int key) {
        int idx = hashFunction(key);
        for (auto& entry : table[idx]) {
            if (entry.first == key)
                return entry.second;
        }
        return "Key not found";
    }
 
    void remove(int key) {
        int idx = hashFunction(key);
        auto& chain = table[idx];
        for (auto it = chain.begin(); it != chain.end(); ++it) {
            if (it->first == key) {
                chain.erase(it);
                cout << "Key " << key << " removed.\n";
                return;
            }
        }
        cout << "Key " << key << " not found.\n";
    }
 
    void display() {
        for (int i = 0; i < size; i++) {
            cout << "Slot " << i << ": ";
            for (auto& entry : table[i])
                cout << "[" << entry.first << " -> " << entry.second << "] ";
            cout << "\n";
        }
    }
};
 
int main() {
    HashTable ht(7);
 
    ht.insert(10, "Alice");
    ht.insert(20, "Bob");
    ht.insert(35, "Charlie");
    ht.insert(17, "Diana");
    ht.insert(24, "Eve");
    ht.insert(3,  "Frank");
 
    cout << "Hash Table:\n";
    ht.display();
 
    cout << "\nSearch key 20: " << ht.search(20) << "\n";
    cout << "Search key 99: " << ht.search(99) << "\n";
 
    cout << "\nRemoving key 17...\n";
    ht.remove(17);
 
    cout << "\nAfter deletion:\n";
    ht.display();
 
    return 0;
}
 