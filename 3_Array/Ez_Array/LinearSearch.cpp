#include<bits/stdc++.h>
using namespace std;

// Return the first occurance of the Given Number

int LinearSearch(int arr[], int n, int target){

    for(int i = 0; i < n; i++) if(arr[i] == target) return i;
    return -1;

}

int main() {
    int arr[] = {10, 25, 8, 40, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    cout << LinearSearch(arr, n, target);

    return 0;
}