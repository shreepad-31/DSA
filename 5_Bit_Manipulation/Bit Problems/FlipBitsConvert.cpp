#include<bits/stdc++.h>
using namespace std;

// Minimum number of flips to convert given number to the Goal
int main(){
    
    int strt, goal, temp, flips = 0;
    cout << "Enter Start Number: ";
    cin >> strt;
    
    cout << "Enter Goal Number: ";
    cin >> goal;

    temp = strt ^ goal;

    for(int i = 0; i < 31; i++) if((temp & (1 << i)) != 0) flips += 1;

    cout << "Minimum flips required to Convert " << strt << " to " << goal << " is " << flips << endl;

    return 0;
}