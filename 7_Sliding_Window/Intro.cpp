#include <bits/stdc++.h>
using namespace std;

int max_sum(const vector <int>& arr, int k){
    int max_sum = 0 , n = arr.size(), sub_arr = 0;
    for(int i = 0; i < k; i++) sub_arr += arr[i];

    for(int i = 0; i < (n - k); i++){
        max_sum = max(max_sum, sub_arr);
        sub_arr += arr[i + k] - arr[i];
    }
    max_sum = max(max_sum, sub_arr);

    return max_sum;
}

int main(){

    vector<int> arr = {3, 1, 5, 4, 5, 6, 2, 5, 6, 3, 5, 3, 2, 3}; 
    
    // 1. Constant Window
    // Maximum sum of a subarray with k consecutively elements

    int res, k = 4;
    res = max_sum(arr, k);
    cout << "Max Sum is: " << res;

    // 2. Longest subarray with {condition}
    // Longest subarray with sum <= k

    // 3. Number of Subarrays with {condtions}

    // 4. Shortest Window with {condition}

    return 0;
} 