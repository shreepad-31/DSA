#include <bits/stdc++.h>
using namespace std;

// Fibonacci Series
int fibo(int n){
    if(n <= 1) return n;
    else{
    return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    int num, result;
    cin >> num;

    for(int i = 0; i <= num; i++){
        cout << fibo(i) << endl;
    }
    return 0;
}


// Factorial Function

int facto(int num){
    if(num <= 1) return 1;
    return num * facto(num - 1);
}

// int n;
// cin >> n;
// cout << facto(n);