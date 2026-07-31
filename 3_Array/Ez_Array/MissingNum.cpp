#include<bits/stdc++.h>
using namespace std;

// Brute Solution:
//     For every element iterate in array and check if the element exists

// Better Solution:
//     Hash the Array and iterate the Hash Array until zero occurs and return the index

// Optimal Solution: 1. By Summing Up

int missingNum1(int nums[], int n){
    int sumArr = 0;
    long long expected_sum = (n + 1) * (n + 2) / 2;

    for(int i = 0; i < n; i++) sumArr += nums[i];

    return expected_sum - sumArr;
}

// Optimal Solution: 2. By XOR (Better then summation for larger input values)

int missingNum2(int nums[], int n){
    int arr_xor = n + 1;

    for(int i = 0; i < n; i++) arr_xor = arr_xor ^ nums[i] ^ (i + 1);

    return arr_xor;
}

int main() {

    int nums[] = {1, 2, 3, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "By Summing, Missing Number: " << missingNum1(nums, n) << endl;
    cout << "By XOR, Missing Number: " << missingNum2(nums, n) << endl;

    return 0;
}
