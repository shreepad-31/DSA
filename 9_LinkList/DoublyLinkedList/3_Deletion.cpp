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

void deleteHead(Node*& head){
    if(head == NULL) return;

    Node* temp =  head;
    head = head->next;

    if(head) head->back = nullptr;
    
    delete temp;

    return;
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



    return 0;
}