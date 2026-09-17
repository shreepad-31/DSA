#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main(){

    vector<int> arr = {3, 4, 1, 2};

    Node y = Node(arr[0], nullptr); // y is a object
    cout << "DATA: " << y.data << " Pointer: " << y.next << endl;

    Node* x = new Node(arr[0], nullptr); // x is pointing to the object, it stores the reference

    cout << x; // This will give address in x
    
    return 0;
}