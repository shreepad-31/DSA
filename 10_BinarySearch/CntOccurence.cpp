#include<bits/stdc++.h>
using namespace std;

int countOccurence(vector<int> nums, int target){
    int n = nums.size(), low = 0, high = n - 1, mid, first = -1, last = -1;

    while(low <= high){
        mid = (low + high) / 2;
        
        if(nums[mid] == target) {first = mid; high = mid - 1;}
        
        else if(nums[mid] > target) high = mid - 1;

        else low = mid + 1;
    }
    if(first == -1) return 0;

    low = 0, high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        
        if(nums[mid] == target) {last = mid; low = mid + 1;}
        
        else if(nums[mid] > target) high = mid - 1;

        else low = mid + 1;
    }

    return last - first + 1;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 2, 3, 4};
    cout << countOccurence(nums1, 2) << endl;   // 3

    vector<int> nums2 = {1, 2, 3, 4, 5};
    cout << countOccurence(nums2, 3) << endl;   // 1

    vector<int> nums3 = {1, 1, 1, 1, 1};
    cout << countOccurence(nums3, 1) << endl;   // 5

    vector<int> nums4 = {1, 2, 3, 4, 5};
    cout << countOccurence(nums4, 6) << endl;   // 0

    vector<int> nums5 = {2, 2, 3, 3, 3, 4, 4};
    cout << countOccurence(nums5, 3) << endl;   // 3

    vector<int> nums6 = {5};
    cout << countOccurence(nums6, 5) << endl;   // 1

    vector<int> nums7 = {5};
    cout << countOccurence(nums7, 2) << endl;   // 0

    vector<int> nums8 = {};
    cout << countOccurence(nums8, 10) << endl;  // 0

    return 0;
}