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

Node* deleteHead(Node*& head){
    if(head == NULL) return head;

    Node* temp =  head;
    head = head->next;
    
    delete temp;

    return head;
}

void deleteTail(Node*& head){
    if(head == nullptr) return;
    else if(head->next == nullptr) {delete head; head = nullptr; return;}

    Node* temp = head;
    while(temp->next->next) temp = temp->next;

    delete temp->next;
    temp->next = nullptr;

    return;
}

void deleteKth(Node*& head, int k){
    if(head == NULL || k <= 0) return;

    Node* temp = head;
    if(k == 1) {head = head->next; delete temp; return;}
    while(k != 2){
        if(temp->next == nullptr) return;
        temp = temp->next;
        k--;
    }
    Node* toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
    return;
}

void deleteValue(Node*& head, int target){
    if(head == NULL) return;

    Node* temp = head; Node* prev = nullptr;
    if(head->data == target) {head = head->next; delete temp; return;}
    
    while(temp->data != target && temp->next != nullptr){
        prev = temp;
        temp = temp->next;
    }
    if(temp->data == target) {prev->next = temp->next; delete temp;}
}

int main(){

    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    Node obj(0);
    Node* head = obj.Array2LL(arr);

    // 1. Delete head
    deleteHead(head);

    // 2. Delete tail
    deleteTail(head);

    // 3. Delete 3rd node
    deleteKth(head, 3);

    // 4. Delete node with value 40
    deleteValue(head, 40);

    obj.TraverseLL(head);

    return 0;
}