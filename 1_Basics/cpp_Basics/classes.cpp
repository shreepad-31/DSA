#include<bits/stdc++.h>
using namespace std;

class teacher{
    // properties
    
private: // Data and methods acessible only for inside class
    double salary;

public: // Data and methods accessible to everyone
    string name, dept, subject;
    
    // methods
    void changedept(string newDept){
        dept = newDept;
    }
    
protected: // Data and methods accessible inside class and its derived class
};

int main(){
    
    
    return 0;
}