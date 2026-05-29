#include <bits/stdc++.h>
using namespace std;

int facto(int num){
    if(num <= 1) return 1;
    return num * facto(num - 1);
}

int sumation(int num){
    if(num == 0) return 0;
    return num + sumation(num - 1);
}

int main(){

    // Patterns

    // *
    // **
    // ***
    // ****
    // *****

    // for(int i = 1; i <= 5; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Digit count, Rev Number, Check Palindrome
    // int num, digit, temp, rev = 0;
    // cin >> num;
    // temp = num;

    // while(temp > 0){
    //     digit = temp % 10;
    //     temp = temp / 10;
    //     rev = rev * 10 + digit;
    // }

    // if(num == rev){
    //     cout << "Number is Palindrome";
    // }
    // else{
    //     cout << "It is not Palindrome";
    // }

    // GCD of 2 Num
    // int a, b, mini, maxi, temp;
    // cin >> a >> b;
    // mini = min(a, b);
    // maxi = a + b - mini;

    // while(mini != 0){
    //     temp = maxi;
    //     maxi = mini;
    //     mini = temp % mini;
    // }

    // cout << maxi;

    // Prime check;
    // int n;
    // cin >> n;

    // for(int i = 2; i <= sqrt(n); i++){
    //     if(n % i == 0){
    //         cout << "Not a Prime bro" << endl;
    //         break;
    //     }
    // }
    // cout << "check complete the above statement is true , if there is no oabove statement then number is prime";

    // Divisors 

    // Factorial Func
    // int n;
    // cin >> n;
    // // cout << facto(n);

    // cout << sumation(n);
    int n = 5;

    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n ; j++) (i == 1 || j == 1 || i == n || j == n) ? cout << "*" : cout << " ";
        cout << endl;
    }    

    return 0;
}