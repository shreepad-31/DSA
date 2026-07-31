#include<bits/stdc++.h>
using namespace std;

// Brute Solution:
//     Check for all the number if there count is 1, if yes return the element

// Better Solution:
//     Use Map to get all the frequencies and then iterate on the map to get the key of Single Frequency

// Optimal Solution:
int singleNumber(vector<int>& nums) {
    int single = 0;
    for(int i = 0; i < nums.size(); i++){
        single = single ^ nums[i];
    }
    return single;
}

int main() {

    vector<int> nums = {4, 1, 2, 1, 2, 7, 7};

    cout << "Single Number: " << singleNumber(nums) << endl;

    return 0;
}