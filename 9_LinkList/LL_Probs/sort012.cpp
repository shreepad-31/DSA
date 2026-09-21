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

Node* dutchSort(Node*& head){
    if(head == nullptr) return head;

    Node* headZero = new Node(-1);
    Node* headOne = new Node(-1);
    Node* headTwo = new Node(-1);

    Node* zero = headZero;
    Node* one = headOne;
    Node* two = headTwo;

    Node* temp = head;
    while(temp){
        if(temp->data == 0){
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->data == 1){
            one->next = temp;
            one = one->next;
        }
        else{
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (headOne->next) ? headOne->next : headTwo->next;
    one->next = headTwo->next;
    two->next = nullptr;

    head = headZero->next;

    delete headZero;
    delete headOne;
    delete headTwo;

    return head;
}

int main(){
    Node obj(0);
    vector<int> arr = {1, 0, 2, 1, 2, 0, 1, 0, 2, 1};

    Node* head = obj.Array2LL(arr);

    cout << "Original LinkedList: ";
    obj.TraverseLL(head);

    dutchSort(head);
    cout << "\nAfter Sorting: ";
    obj.TraverseLL(head);

    return 0;
}