#include<bits/stdc++.h>
using namespace std;

// if we declare array here(Globally) It will contain zero as garbage value
// Max size of array gobally is 10 ^ 7

// Largest and Second Largest
pair<int, int> largest_slargest(int arr[], int n){
    int largest = -1, slargest = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return {slargest, largest};
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