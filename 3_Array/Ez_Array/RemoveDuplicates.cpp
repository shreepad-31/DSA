#include<bits/stdc++.h>
using namespace std;

// You have to store all the k distinct elements of the array in first [k - 1] index 
// Given Array is sorted in non-decreasing manner
// The rest of the Array can be anything
// Also Return k

int removeDuplicates(vector<int>& nums) {
    int k = 0;

    if(nums.size() == 0) return 0;
    for(int pointer = 1; pointer < nums.size(); pointer++){
        if(nums[k] < nums[pointer]) nums[++k] = nums[pointer];
    }
    return k + 1;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates(nums);

    cout << "k = " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}