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
};


int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);

    head->next = second;
    second->back = head;

    cout << head->data << " " << head->next->data << endl;

    return 0;
}