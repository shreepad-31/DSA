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

};

// Brute Solution TC = O(3N)
void add1(Node* &head1){
    head1->reverseLL(head1);
    int carry = 1;
    Node* temp = head1;

    while(carry){
        if(temp->data < 9) {temp->data++; carry = 0;}
        else{
            temp->data = 0;
            if(temp->next) temp = temp->next;
            else {temp->next = new Node(1); carry = 0;}
        }
    }
    head1->reverseLL(head1);
}

// Optimal Solution: Recursive Approach
void helper(Node* head, int& carry){
    if(!head) return;
    helper(head->next, carry);

    if(carry){
        if(head->data == 9) {head->data = 0; return;}
        else {head->data++; carry = 0; return;}
    }
}

void Plus1(Node*& head){
    int carry = 1;
    helper(head, carry);
    
    if(carry == 1) head = new Node(1, head);
}

int main(){
    Node obj(0);
    vector<int> arr = {9, 9, 9};

    Node* head1 = obj.Array2LL(arr);

    cout << "Original LinkedList: ";
    obj.TraverseLL(head1);

    add1(head1);
    cout << "\nAfter Adding 1 to LL: ";
    obj.TraverseLL(head1);

    Node* head2 = obj.Array2LL(arr);

    cout << "\nRecurive Method: Original LinkedList: ";
    obj.TraverseLL(head2);

    Plus1(head2);
    cout << "\nRecurive Method: After Adding 1 to LL: ";
    obj.TraverseLL(head2);

    return 0;
}