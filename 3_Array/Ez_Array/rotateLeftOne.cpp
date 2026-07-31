#include<bits/stdc++.h>
using namespace std;

// Rotating Array by One Place to Left
void  rotateLeftbyOne(vector<int> &nums, int n){
    int temp = nums[0];

    for(int i = 1; i < n; i++){
        nums[i - 1] = nums[i];
    }
    nums[n - 1] = temp;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << "Original Array: ";
    for (int x : nums)
        cout << x << " ";

    cout << endl;

    rotateLeftbyOne(nums, nums.size());

    cout << "After Left Rotation by One: ";
    for (int x : nums)
        cout << x << " ";

    cout << endl;

    return 0;
}