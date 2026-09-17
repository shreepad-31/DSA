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

void insertHead(Node*& head, int data1){
    Node* newHead = new Node(data1, head);
    head = newHead;
}

void insertTail(Node*& head, int data1){
    Node* newTail = new Node(data1);

    if(head == NULL) {head = newTail; return;}

    Node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = newTail;
}

void insertKth(Node* &head, int k, int data1){
    if(head == NULL) {head = new Node(data1); return;}

    if(k == 1) {head = new Node(data1, head); return;}

    Node* temp = head;
    for(int i = 1; i < k - 1; i++) temp = temp->next;

    Node* newNode = new Node(data1, temp->next);
    temp->next = newNode;
}

// Given that target is present
void insertBeforeTarget(Node*& head, int target, int val){

    if(head->data == target){
        head =  new Node(val, head);
        return;
    }

    Node* temp = head;

    while(temp->next->data != target){
        temp = temp->next;
    }
    
    temp->next = new Node(val, temp->next);
}

int main(){

    vector<int> arr = {10, 20, 30, 40, 50, 60};

    Node obj(0);
    Node* head = obj.Array2LL(arr);

    cout << "Original: ";
    obj.TraverseLL(head);

    // 1. Insert at head
    insertHead(head, 5);

    cout << "\nAfter insertHead(5): ";
    obj.TraverseLL(head);

    // 2. Insert at tail
    insertTail(head, 70);

    cout << "\nAfter insertTail(70): ";
    obj.TraverseLL(head);

    // 3. Insert at kth position
    insertKth(head, 4, 25);

    cout << "\nAfter insertKth(4, 25): ";
    obj.TraverseLL(head);

    // 4. Insert before target
    insertBeforeTarget(head, 50, 45);

    cout << "\nAfter insertBeforeTarget(50, 45): ";
    obj.TraverseLL(head);

    return 0;
}