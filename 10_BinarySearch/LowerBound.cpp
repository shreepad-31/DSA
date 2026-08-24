#include<bits/stdc++.h>
using namespace std;

// Lower Bound is the lowest index i in given Array nums such that nums[i] >= x
int findLowerBound(vector<int> nums, int n, int x){
    int ans = n, low = 0, high = n - 1, mid;

    while(low <= high){
        mid = (high + low) / 2;

        if(nums[mid] >= x) {ans = mid; high = mid - 1;}

        else low = mid + 1;
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 4, 4, 5, 7};
    int n = nums.size();
    int x = 4;

    cout << findLowerBound(nums, n, x) << endl;

    // C++ STL for Lower Bound
    auto lb = lower_bound(nums.begin(), nums.end(), 4);
    cout << lb - nums.begin();

    return 0;
}