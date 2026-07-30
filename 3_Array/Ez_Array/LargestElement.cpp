#include<bits/stdc++.h>
using namespace std;

// Largest Element of the Array

// Brute Solution: 
//     Just Sort the Array and Print the Last Element

// Optimal Solution
int LargestElement(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] > largest) largest = arr[i];

    return largest;
}

// Second Largest Element of the Array

// Brute Solution:
//     Just Sort the Array and Traverse the Array from the Back and Get Second Largest Element

// Optimal Solution
int SecondLargestElement(int arr[], int n){
    int largest = arr[0], SecondLargest = INT_MIN;

    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            SecondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > SecondLargest && arr[i] != largest) SecondLargest = arr[i];
    }

    return SecondLargest;
}

int main(){

    int arr[] = {12, 35, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nLargest Element: " << LargestElement(arr, n);
    cout << "\nSecond Largest Element: " << SecondLargestElement(arr, n);

    return 0;
}