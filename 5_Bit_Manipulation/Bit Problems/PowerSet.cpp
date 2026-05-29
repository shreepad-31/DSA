#include<bits/stdc++.h>
using namespace std;

// Give the power set of given set //
vector<vector<int>> power_set(vector<int> nums){
    int n = nums.size(), subsets = 1 << n;
    vector<vector<int>> power_set = {}; 

    for(int i = 0; i < subsets; i++){
        vector<int> subset;

        for(int j = 0; j < n; j++) if(i & (1 << j)) subset.push_back(nums[j]);

        power_set.push_back(subset);

    }
    return power_set;
}

int main(){
    
    int n, temp; vector<int> set; vector<vector<int>> ans;

    cout << "Enter length of array: ";
    cin >> n;

    for(int i = 0; i < n; i++){
    
        cout << "Enter " << i << "th element of set: ";
        cin >> temp;
        set.push_back(temp);
    }
    ans = power_set(set);

    cout << "Subsets: " << endl;
    
    for (auto subset : ans) {
        cout << "[ ";
        for (auto element : subset) {
            cout << element << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}