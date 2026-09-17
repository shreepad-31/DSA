#include<bits/stdc++.h>
using namespace std;

// LinkLiist 

// Non Continues
// First Node is Start Node, We store it to access linklist
// Each Node contains Data and Memory Loaction of next Node
// Last Node is Tail of the linklist, with Null Memory Loaction

// LinkList Class

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


int main(){

    vector<int> arr = {3, 4, 1, 2};

    Node y = Node(arr[0], nullptr); // y is a object
    cout << "DATA: " << y.data << " Pointer: " << y.next << endl;

    Node* x = new Node(arr[0], nullptr); // x is pointing to the object, it stores the reference

    cout << x; // This will give address in x
    
    return 0;
}