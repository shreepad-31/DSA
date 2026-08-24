#include<bits/stdc++.h>
using namespace std;

pair<int, int> floorCeil(vector<int> nums, int target){
    int n = nums.size(), low = 0, high = n - 1, floor = -1, ceil = -1, mid;

    while(low <= high){
        mid = (low + high) / 2;
        if(nums[mid] == target) return {mid, mid};

        else if(nums[mid] > target) {ceil = mid; high = mid - 1;}

        else {floor = mid; low = mid + 1;}
    }
    return {floor, ceil};
}

int main(){

    // Case 1: target exists
    vector<int> nums1 = {1, 3, 5, 7, 9};
    auto ans1 = floorCeil(nums1, 5);

    cout << "Case 1: Floor = " << ans1.first
         << ", Ceil = " << ans1.second << endl;


    // Case 2: target lies between two elements
    vector<int> nums2 = {2, 4, 6, 10, 15};
    auto ans2 = floorCeil(nums2, 8);

    cout << "Case 2: Floor = " << ans2.first
         << ", Ceil = " << ans2.second << endl;


    // Case 3: target is smaller than the smallest element
    vector<int> nums3 = {5, 10, 15, 20, 25};
    auto ans3 = floorCeil(nums3, 2);

    cout << "Case 3: Floor = " << ans3.first
         << ", Ceil = " << ans3.second << endl;


    return 0;
}