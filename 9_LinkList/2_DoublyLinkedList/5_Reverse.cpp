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

void reverseDLL(Node*& head){
    Node* temp = head;
    while(temp){
        swap(temp->next, temp->back);
        head = temp;
        temp = temp->back;
    }
}

int main(){

    vector<int> arr = {1, 2, 3};

    Node obj(0);
    Node* head = obj.Array2DLL(arr);

    cout << "Original DLL: ";
    obj.TraverseDLL(head);

    reverseDLL(head);

    cout << "\nAfter Reversing: ";
    obj.TraverseDLL(head);

    return 0;
}