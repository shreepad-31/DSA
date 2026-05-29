#include<bits/stdc++.h>
using namespace std;

int singlenum2(vector<int>& arr, int n){

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i += 3) if((arr[i] ^ arr[i + 1]) != 0) return arr[i];
    
    return arr[n - 1];
}

// Every Number in Aarray repeats Thrice, Expect for one
int main(){
    vector<int> arr = {3, 1, 7, 8, 2, 2, 1, 7, 8, 5, 3, 2, 1, 8, 7, 3};
    int n = arr.size();

    int result = singlenum2(arr, n);
    cout << "Non Repeating Number is: " << result;
    
    return 0;
}