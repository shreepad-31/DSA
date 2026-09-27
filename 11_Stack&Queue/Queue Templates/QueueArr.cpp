#include<bits/stdc++.h>
using namespace std;

class queueImpl{
    public:
    int q[10] = {0};
    int start = 0;
    int end = 0;
    int currsize = 0;

    public:
    void push(int val){
        if(currsize == 10) return;
        q[end] = val;
        end = (end + 1) % 10;
        currsize++;
    }
    void pop(){
        if(!currsize) return;
        start = (start + 1) % 10;
        currsize--;
    }
    bool isempty(){
        if(!currsize) return true;
        return false;
    }
    bool isfull(){
        if(currsize == 10) return true;
        return false;
    }
    int size(){
        return currsize;
    }    
};

int main(){
    

    return 0;
}