#include<bits/stdc++.h>
using namespace std;

// Binary Search 
int binarySearchAlgo(vector<int> nums, int target){
    int low = 0, high = nums.size() - 1, mid = (high - low) / 2;

    while(nums[mid] != target){

        // When the Search i
        if(high < low){
            mid = -1;
            break;
        }
        if(nums[mid] > target) high = mid - 1;
        else low = mid + 1;
        mid = low + (high - low) / 2;
    }

    return mid;
}

// Recursive Appraoch: Binary Search
int binarySearchRecur(vector<int>& nums, int target, int high, int low){
    if(low >= high) return -1;
    
    int mid = low + (high - low - 1) / 2;

    if(nums[mid] == target) return mid;

    if(nums[mid] > target) return binarySearchRecur(nums, target, mid, low);

    return binarySearchRecur(nums, target, high, mid + 1);
}

// Time Complexity: log2(n)

int main(){
    vector<int> nums = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    cout << "Iterative: " << binarySearchAlgo(nums, target) << endl;
    cout << "Recursive: " << binarySearchRecur(nums, target, nums.size(), 0) << endl;

    return 0;
}