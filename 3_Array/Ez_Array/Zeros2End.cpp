#include<bits/stdc++.h>
using namespace std;

// In given Array move all the Zeros of Array to the Last

// Brute Solution:
//     Make a temp array and store all the non-zero numbers in it
//     Now in the original array overwrite in order and for the rest add zeros

// 
void zeros2end(int arr[], int n){
    int zeroPointer = -1;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroPointer = i;
            break;
        }

    }

    if(zeroPointer == -1) return;
    else{
        for(int i = zeroPointer + 1; i < n; i++){
            if(arr[i] != 0){
                swap(arr[i], arr[zeroPointer]);
                zeroPointer++;
            }
        }
    }

}

int main() {
    int arr[] = {0, 1, 0, 3, 12, 0, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    zeros2end(arr, n);   

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
