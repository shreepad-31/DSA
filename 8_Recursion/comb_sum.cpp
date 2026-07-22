#include<bits/stdc++.h>
using namespace std;

void combination_sum(int ind , int target, vector<vector<int>> &ans, vector<int> &temp, const vector<int> &arr){
    if(target == 0){
        ans.push_back(temp);
        return;
    }

    if(ind == arr.size()) return;

    if(arr[ind] <= target){
        temp.push_back(arr[ind]);
        combination_sum(ind, target - arr[ind], ans, temp, arr);
        temp.pop_back();
    }

    combination_sum(ind + 1, target, ans, temp, arr);

}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans;
    vector<int> temp;

    combination_sum(0, target, ans, temp, arr);

    for (auto &v : ans) {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}