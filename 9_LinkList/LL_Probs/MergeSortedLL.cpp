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

Node* mergeSortedLL(Node* head1, Node* head2){
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    Node* temp1 = head1;
    Node* temp2 = head2;

    while (temp1 && temp2){
        if(temp1->data <= temp2->data){
            curr->next = temp1;
            curr = temp1;
            temp1 = temp1->next;
            if(!temp1) curr->next = temp2;
        }
        else{
            curr->next = temp2;
            curr = temp2;
            temp2 = temp2->next;
            if(!temp2) curr->next = temp1;
        }
    }
    Node* newHead = dummy->next;
    delete dummy;
    return newHead;
}

int main(){
    Node obj(0);
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {1, 3, 5, 7, 8, 9, 10};

    Node* head1 = obj.Array2LL(arr1);
    Node* head2 = obj.Array2LL(arr2);

    cout << "LinkedList 1: ";
    obj.TraverseLL(head1);

    cout << "\nLinkedList 2: ";
    obj.TraverseLL(head2);

    Node* newHead = mergeSortedLL(head1, head2);
    cout << "\nMerge LinkedList: ";
    obj.TraverseLL(newHead);

    return 0;
}