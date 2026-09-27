#include<bits/stdc++.h>
using namespace std;

class stImpl{
    public:
    int topInd = -1;
    int st[10] = {0};

    public:
    int top(){
        if(topInd == -1) return -1;
        else return st[topInd];
    }

    int size() {return topInd + 1;}

    bool isfull(){
        if(topInd == 9) return true;
        else return false;
    }

    bool isempty(){
        if(topInd == -1) return true;
        else return false;
    }

    void push(int val){
        if(topInd == 9) return;
        topInd++;
        st[topInd] = val;
    }

    void pop(){
        if(topInd == -1) return;
        st[topInd] = 0;
        topInd--;
    }
};

int main(){
    

    return 0;
}