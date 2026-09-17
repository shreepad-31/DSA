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
};

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


// Traverse the Linklist

void TraverseLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int sizeofLL(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp != nullptr){
        temp = temp->next;
        count++;
    }

    return count;
}

bool SearchinLL(Node* head, int target){
        Node* temp = head;

        while(temp){
            if(temp->data == target) return true;
            temp = temp->next;
        }

        return false;
}

int main(){
    vector<int> arr = {2, 3, 5, 6, 3, 4};
    Node* head = Array2LL(arr);

    TraverseLL(head); cout << endl;

    cout << "Size of LinkedList is: " << sizeofLL(head) << endl;
    
    SearchinLL(head, 6) == true ? cout << "Element 6 Exists" : cout << "Element 6 does not Exists";
    
    return 0;
}