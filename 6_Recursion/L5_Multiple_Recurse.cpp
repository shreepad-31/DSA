#include <bits/stdc++.h>
using namespace std;

// Fibonacci Series
int fibo(int n){
    if (n <= 1){
        return n;
    }
    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main(){
    int num, result;
    
    cin >> num;
    result = fibo(num);
    cout << result << endl;

    return 0;
}