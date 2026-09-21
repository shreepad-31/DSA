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

    Node* Array2LL(vector<int> arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1; i < arr.size(); i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }

    void TraverseLL(Node* head){
        Node* temp = head;
        while(temp) {cout << temp->data << " "; temp = temp->next;}
    }

};

void add1(Node* head){
    int carry = 1;
    Node* temp = head;

    while(carry){
        if(temp->data < 9) {temp->data++; carry = 0;}
        else{
            temp->data = 0;
            if(temp->next) temp = temp->next;
            else {temp->next = new Node(1); carry = 0;}
        }
    }
}

int main(){
    Node obj(0);
    vector<int> arr = {9, 9, 9};

    Node* head = obj.Array2LL(arr);

    cout << "Original LinkedList: ";
    obj.TraverseLL(head);

    add1(head);
    cout << "\nAfter Adding 1 to LL: ";
    obj.TraverseLL(head);

    return 0;
}