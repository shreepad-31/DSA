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

// Iterative Approach
void reverseLL(Node* &head){
    if(head == nullptr) return;

    Node* slow = nullptr;
    Node* temp = head;
    Node* fast = head->next;

    while(fast){
        temp->next = slow;
        slow = temp;
        temp = fast;
        fast = fast->next;
    }
    head = temp;
    temp->next = slow;
}

// Recursive Approach
void RecurRevLL(Node* head){
    return;
}

int main(){
    Node obj(0);
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node* head = obj.Array2LL(arr);

    cout << "Original LinkedList: ";
    obj.TraverseLL(head);

    reverseLL(head);
    cout << "\nAfter Reversing: ";
    obj.TraverseLL(head);

    return 0;
}