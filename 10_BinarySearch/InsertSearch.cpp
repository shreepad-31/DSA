#include<bits/stdc++.h>
using namespace std;

// Given a target and Sorted Array of distinct numbers
// You have to search the index of target or find the index to where it should be inserted

int insertSearch(vector<int> nums, int target){
    int n = nums.size(), ans = n, low = 0, high = n - 1, mid;
    
    while(low <= high){
        mid = (low + high) / 2;

        if(nums[mid] == target) return mid;

        else if(nums[mid] > target) {ans = mid; high = mid - 1;}
        
        else low = mid + 1;
    }

    return ans;
}

int main(){
    vector<int> nums = {1, 3, 5, 6, 9, 12};

    cout << insertSearch(nums, 5) << endl;   // 2
    cout << insertSearch(nums, 4) << endl;   // 2
    cout << insertSearch(nums, 0) << endl;   // 0
    cout << insertSearch(nums, 15) << endl;  // 6

    return 0;
}