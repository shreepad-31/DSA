#include<bits/stdc++.h>
using namespace std;

// Two Sum: Type-1

// Given an Array and a Target 
// Return true if any two elements of Array can sum up to the Target, otherwise return false

// Two Sum: Type-2

// Given that such two elements are present
// Return the index of those two elements

// Brute Solution //
//     Iterate on each element

// Optimal Solution //
vector<int> twoSum(vector<int> nums, int target){
    vector<pair<int, int>> numswithindex;
    int n = nums.size();

    for(int i = 0; i < n; i++) numswithindex.push_back({nums[i], i});
    
    sort(numswithindex.begin(), numswithindex.end());

    int left = 0, right = n - 1;
    while(left < right){
        int sum = numswithindex[left].first + numswithindex[right].first;
        if(sum > target) right--;
        else if(sum < target) left++;
        else break;
    }
    
    return {numswithindex[left].second, numswithindex[right].second};
}

int main() {
    vector<int> nums = {2, 7, 5, 5, 3};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indices: " << ans[0] << " " << ans[1] << endl;

    return 0;
}