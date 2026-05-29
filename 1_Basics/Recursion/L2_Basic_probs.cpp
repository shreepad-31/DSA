#include <bits/stdc++.h>
using namespace std;

// Question 1
// Print "name" n times

void recr_name(string name, int count){

    if(count == 0)return; // Base Condition

    cout << name << endl; // Task
    recr_name(name, count - 1); // Recursion
}

// Question 2
// Print from 1 to n

void recr_num(int num, int i){
    if(num < i) return;

    cout << i << " " << endl;
    recr_num(num, i + 1);
}

// Question 3
// Print from n to 1

void recr_rev_num(int num){
    if(num < 1) return;

    cout << num << " " << endl;
    recr_rev_num(num - 1);
}

// Question 4
// Print from 1 to n (by backtrack)

void back_recr_num(int num){
    if(num < 1) return;

    back_recr_num(num - 1);
    cout << num << endl;
}

// Question 5
// Print from n to 1 (by backtrack)

void back_recr_rev_num(int num, int i){
    if(num < i) return;

    back_recr_rev_num(num, i + 1);
    cout << i << endl;
}


int main(){
    cout << "Printing Shree 5 times:" << endl;
    recr_name("Shree" , 5); // Prints "Shree" "5" times

    cout << "Printing 1 to 5:" << endl;
    recr_num(5, 1); // Prints "1" to "5"

    cout << "Printing 5 to 1:" << endl;
    recr_rev_num(5); // Print "5" to 1

    cout << "Printing 1 to 5 by Backtracking:" << endl;
    back_recr_num(5); // Prints "1" to "5" by Back-tracking

    cout << "Printing 5 to 1 by Backtracking:" << endl;
    back_recr_rev_num(5, 1); // Prints "5" to "1" by Back-tracking
    return 0;
}