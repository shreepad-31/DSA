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

// All we need is head of LL and every element of array is saved in LL
Node* arr2LL(vector<int> arr, int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> sample = {2, 3, 5, 6, 3, 4};
    Node* result = arr2LL(sample, sample.size());
    
    return 0;
}