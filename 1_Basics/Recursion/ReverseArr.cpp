#include<bits/stdc++.h>
using namespace std;

void reverse_arr(vector<int> &nums, int n, int i){
    n--;
    if(n <= i) return;
    swap(nums[i], nums[n]);
    reverse_arr(nums, n, i + 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    reverse_arr(nums, nums.size(), 0);

    for (int x : nums)
        cout << x << " ";

    return 0;
}