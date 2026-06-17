#include<bits/stdc++.h>
using namespace std;

// if we declare array here(Globally) It will contain zero as garbage value
// Max size of array gobally is 10 ^ 7

// Largest and Second Largest
pair<int, int> largest_slargest(int a[], int n){
    int largest = -1, s_largest = -1;
    for(int i = 1; i < n; i++){
        if(a[i] > largest){
            s_largest = largest;
            largest = a[i];
        }
        else if(a[i] > s_largest){
            s_largest = a[i];
        }
    }
    return {largest, s_largest};
}


// Similarly you can do it for Smallest and Second Smallest number


// Check if sorted array
bool check(vector<int>& a){
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] > a[i + 1]){
            return false;
        }
    }
    return true;
}



int main(){
    // Max size of array 10 ^ 6
    int a[] = {2, 3, 8, 4, 3, 5, 1, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);
    pair<int, int> result;
    result = largest_slargest(a, n);
    cout << result.first << " " << result.second;
    return 0;
}