#include<bits/stdc++.h>
using namespace std;

void backtrack(int start, vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
        result.push_back(current);

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;

            current.push_back(nums[i]);

            backtrack(i + 1, nums, current, result);

            current.pop_back();
        }
    }

int main() {
    vector<int> nums = {1, 2, 2};

    sort(nums.begin(), nums.end()); 

    vector<vector<int>> result;
    vector<int> current;

    backtrack(0, nums, current, result);

    cout << "Unique subsets:\n";
    for (auto &subset : result) {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}\n";
    }

    return 0;
}