#include <bits/stdc++.h>
using namespace std;

void allPermutations(vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans, vector<bool>& freq){
    if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
            freq[i] = true;
            ds.push_back(nums[i]);

            allPermutations(nums, ds, ans, freq);

            ds.pop_back();
            freq[i] = false;
        }
    }
}

vector<vector<int>> permute(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    vector<bool> freq(nums.size(), false);

    allPermutations(nums, ds, ans, freq);

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> ans = permute(nums);

    cout << "All Permutations:" << endl;

    for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}