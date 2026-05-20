#include <bits/stdc++.h>
using namespace std;

// Question 1
// Print "name" n times
void name_n_times(int i, int n){
    if(i > n) return;
    cout << "Shree" << endl;
    name_n_times(i + 1, n);
}   

// Question 2
// Print from 1 to n

void n_nums(int i, int n){
    if(i > n) return;
    cout << i << endl;
    n_nums(i + 1, n);
}

// Question 3
// Print from n to 1

void n_1_nums(int n){
    if(n < 1) return;
     
    cout << n << endl;
    n_1_nums(n - 1);
}

// Question 4
// Print from 1 to n (by backtrack)

void back_1_n(int n){
}


// Question 5
// Print from n to 1 (by backtrack)

void back_n_1(int n){
}


int main(){
    int n;
    cin >> n;
    name_n_times(1, n);
    n_nums(1, n);
    n_1_nums(n);
    back_1_n(n);
    back_n_1(n);

    return 0;
}