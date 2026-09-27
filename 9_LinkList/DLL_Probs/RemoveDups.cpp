#include<bits/stdc++.h>
using namespace std;

class Node{
   public:
       int data;
       Node* next;
       Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node* Array2DLL(vector<int> arr){
        Node* head = new Node(arr[0]);
        Node * prev = head;
        for(int i = 1; i < arr.size(); i++){
            Node* newNode = new Node(arr[i], nullptr, prev);
            prev->next = newNode;
            prev = newNode;
        }
        return head;
    }

    void TraverseDLL(Node* head){
        Node* temp = head;
        while(temp) {cout << temp->data << " "; temp = temp->next;}
    }

};

Node* removeDuplicates(Node* head){
    if(!head || !head->next) return head;

    Node* temp = head->next;

    while(temp){
        if(temp->data == temp->back->data){
            Node* toDelete = temp;
            temp = temp->next;

            toDelete->back->next = temp;
            if(temp) temp->back = toDelete->back;

            delete toDelete;
        }
        else temp = temp->next;
    }

    return head;
}

int main(){
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 4, 5, 5};

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* newNode = new Node(arr[i], nullptr, prev);
        prev->next = newNode;
        prev = newNode;
    }

    cout << "Original DLL: ";
    head->TraverseDLL(head);

    head = removeDuplicates(head);

    cout << "\nAfter removing duplicates: ";
    head->TraverseDLL(head);

    return 0;
}