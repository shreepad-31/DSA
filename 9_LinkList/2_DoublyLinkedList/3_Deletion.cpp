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
    while(temp->next) temp = temp->next;

    temp->back->next = nullptr;
    delete temp;

    return;
}

// Given k <= No of Nodes
void deleteKth(Node*& head, int k){
    if(head == NULL || k <= 0) return;
    else if(k == 1) {deleteHead(head); return;}

    Node* temp = head;
    for(; k > 1; k--) temp = temp->next;

    if(temp->next) temp->next->back = temp->back;
    temp->back->next = temp->next;
    
    delete temp;
}

// Given Node is not the head
void deleteNode(Node* target){
    if(target->next) target->next->back = target->back;
    target->back->next = target->next;
    
    delete target;
}

int main(){

    vector<int> arr = {10, 20, 30, 40, 50};

    Node obj(0);
    Node* head = obj.Array2DLL(arr);

    cout << "Original DLL: ";
    obj.TraverseDLL(head);
    cout << endl;

    // Delete head
    deleteHead(head);

    cout << "After deleting head: ";
    obj.TraverseDLL(head);
    cout << endl;

    // Delete tail
    deleteTail(head);

    cout << "After deleting tail: ";
    obj.TraverseDLL(head);
    cout << endl;

    // Delete kth node
    deleteKth(head, 2);

    cout << "After deleting 2nd node: ";
    obj.TraverseDLL(head);
    cout << endl;

    // Delete a given node (not head)
    Node* target = head->next;
    deleteNode(target);

    cout << "After deleting given node: ";
    obj.TraverseDLL(head);
    cout << endl;

    return 0;
}