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

class stackLL{
    public:
    Node* top = nullptr;
    int currsize = 0;

    void push(int val){
        top = new Node(val, top);
        currsize++;
    }
    void pop(){
        if(!top) return;
        Node* temp = top;
        top = top->next;
        delete temp;
        currsize--;
    }
    int size(){
        return currsize;
    }
    bool isempty(){
        if(!top) return true;
        return false;
    }
};

int main(){
    

    return 0;
}