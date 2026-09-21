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

void insertHead(Node*& head, int data1){
    Node* newHead = new Node(data1, head, nullptr);
    if(head) head->back = newHead;
    head = newHead;
}

void insertTail(Node*& head, int data1){

    if(head == NULL) {head = new Node(data1); return;}

    Node* temp = head;
    while(temp->next) temp = temp->next;

    temp->next = new Node(data1, nullptr, temp);
}

void insertBeforeTail(Node*& head, int data1){
    if(head == nullptr) {head = new Node(data1); return;}

    Node* temp = head;
    while(temp->next) temp = temp->next;
    Node* newNode = new Node(data1, temp, temp->back);

    if(temp->back) temp->back->next = newNode;
    else head = newNode;

    temp->back = newNode;
}

// Given k <= No. of Node
void insertBeforeKth(Node* &head, int k, int data1){
    if(head == nullptr || k <= 0) return;

    if(k == 1) {insertHead(head, data1); return;}

    Node* temp = head;
    for(; k > 1; k--) temp = temp->next;

    Node* newNode = new Node(data1, temp, temp->back);
    temp->back->next = newNode;
    temp->back = newNode;
}

// Given Node is not Head
void insertBeforeTarget(Node* target, int data1){
    Node* newNode = new Node(data1, target, target->back);
    target->back->next = newNode;
    target->back = newNode;
}

int main(){

    vector<int> arr = {10, 20, 30, 40, 50};

    Node obj(0);
    Node* head = obj.Array2DLL(arr);

    cout << "Original DLL: ";
    obj.TraverseDLL(head);
    cout << endl;

    // Insert at head
    insertHead(head, 5);

    cout << "After insertHead(5): ";
    obj.TraverseDLL(head);
    cout << endl;

    // Insert at tail
    insertTail(head, 60);

    cout << "After insertTail(60): ";
    obj.TraverseDLL(head);
    cout << endl;

    // Insert before tail
    insertBeforeTail(head, 55);

    cout << "After insertBeforeTail(55): ";
    obj.TraverseDLL(head);
    cout << endl;

    // Insert before kth node
    insertBeforeKth(head, 3, 15);

    cout << "After insertBeforeKth(3, 15): ";
    obj.TraverseDLL(head);
    cout << endl;

    // Insert before a given node
    Node* target = head->next->next;
    insertBeforeTarget(target, 25);

    cout << "After insertBeforeTarget(25): ";
    obj.TraverseDLL(head);
    cout << endl;

    return 0;
}