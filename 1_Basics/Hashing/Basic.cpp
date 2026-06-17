#include<bits/stdc++.h>
using namespace std;

// Basic Hashing Idea
// Prestoring and Fetching

// Given Integer 1 - 9 in Array

int main(){
    
    int arr[] = {9, 3, 2, 8, 5, 1, 5, 7, 6, 4, 9, 1, 6, 7, 3, 8, 2, 6, 1, 7, 8, 5, 1, 9, 3, 6, 8, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Pre-Store
    int hash[10] = {0};
    for(int i = 0; i < n; i++) hash[arr[i]]++;

    // Fetching
    for(int i = 0; i < 10; i++) cout << i << " :- " << hash[i] << " || ";
    
    return 0;
}