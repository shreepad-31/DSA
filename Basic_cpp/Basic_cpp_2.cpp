#include <bits/stdc++.h>
using namespace std;


// Void Function
void greet(string name){
    cout << "Hey, " << name << "!! Welcome back!!!";
}

// Return Function 
int sum(int a, int b){
    return a + b;
}

void dosomething(string s){
    s[0] = 'k';
    cout << s << endl;
}

void dosomething(int &num){
    num += 5;
    cout << num << endl;
}


int main(){
    string name1;
    cin >> name1;
    greet(name1);

    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res << endl;

    // pass by value (copy)
    string s = "raj";
    dosomething(s);
    cout << s << endl;

    // pass by reference
    int num = 10;
    dosomething(num);
    cout << num << endl;
    // Arrays always gets passed by reference

    return 0;
}