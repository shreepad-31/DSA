#include <bits/stdc++.h>
using namespace std;

// Check if Array is Sorted
bool checkSorted(int arr[], int n){

    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]) return false;
    }
    return true;

}

int main(){

    int arr[] = {1, 2, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    if(checkSorted(arr, n))
        cout << "\nArray is Sorted";
    else
        cout << "\nArray is Not Sorted";

    return 0;
}