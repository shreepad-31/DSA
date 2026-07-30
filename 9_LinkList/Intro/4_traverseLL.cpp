#include<bits/stdc++.h>
using namespace std;

class Node{
public:
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

// All we need is head of LL and every element of array is saved in LL
Node* arr2LL(vector<int> arr, int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


// Traverse the Linklist

void traverseLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Size of Linklist;
void sizeLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    cout << count << endl;
}
// Check if given element present or not

bool checkElement(Node* head, int num){
    Node* temp = head;
    while(temp){
        if(temp->data == num) return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int> arr = {2, 3, 5, 6, 3, 4};
    Node* head = arr2LL(arr, arr.size());
    cout << head->data << endl;

    traverseLL(head);

    sizeLL(head);

    bool result = checkElement(head, 4);
    result == true ? cout << "Present\n" : cout << "Not Present\n";
    
    return 0;
}