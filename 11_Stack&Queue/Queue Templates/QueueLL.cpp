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

class queueLL{
    public:
    Node* start =nullptr;
    Node* end = nullptr;
    int currsize = 0;

    public:
    void push(int val){
        if(!start){
            start = new Node(val);
            end = start;
        }
        else{
            end->next = new Node(val);
            end = end->next;
        }
        currsize++;
    }

    void pop(){
        if(!start) return;
        Node* temp = start;
        start = start->next;
        if(!start) end = nullptr;
        delete temp;
        currsize--;
    }

    int size(){
        return currsize;
    }

    bool isempty(){
        return !start;
    }
};

int main(){
    

    return 0;
}