#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void recurse_func(){

    if(cnt >= 3) return; // Base Condition

    cout << cnt << endl;
    cnt++;

    recurse_func(); // Recursion
}

int main(){

recurse_func();

    return 0;
}