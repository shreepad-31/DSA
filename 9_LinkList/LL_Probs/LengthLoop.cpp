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

int lengthLoop(Node* head){
    if(!head || !head->next) return 0;

    Node* slow = head->next;
    Node* fast = slow->next;

    while(fast && fast->next){
        if(slow == fast){
            int count = 1;
            fast = fast->next;
            while(slow != fast) {fast = fast->next; count++;}
            return count;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    return 0;
}

int main(){
    Node obj(0);
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node* head = obj.Array2LL(arr);

    // Find node 3
    Node* loopNode = head;
    while(loopNode->data != 3){
        loopNode = loopNode->next;
    }

    // Find tail
    Node* tail = head;
    while(tail->next){
        tail = tail->next;
    }

    // Create loop: 6 -> 3
    tail->next = loopNode;

    int result = lengthLoop(head);

    cout << "Length of the Loop: " << result;

    return 0;
}