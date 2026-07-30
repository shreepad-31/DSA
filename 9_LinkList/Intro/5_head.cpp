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

void traverseLL(Node* head){
    Node* temp = head;
    int num;
    while(temp){
       cout << temp->data << " ";
       num = temp->data;
       temp = temp->next;
   }
}

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

// Deletion of Head
Node* deleteHead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Deletion of Tail
Node* deleteTail(Node* head){
    if
    return head;
}

int main(){
    vector<int> sample = {2, 3, 4, 6, 2, 4};

    Node* head = arr2LL(sample, sample.size());

    cout << "Before Head Removal: \n";
    traverseLL(head);

    Node* newHead = deleteHead(head);
    cout << "\nAfter Head Deletion: \n";
    traverseLL(newHead);

    return 0;
}