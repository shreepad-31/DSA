#include<bits/stdc++.h>
using namespace std;

void subset_sum(int ind, int temp, vector<int>& arr, vector<int>& sums) {

        if (ind == arr.size()) {
            sums.push_back(temp);
            return;
        }

        subset_sum(ind + 1, temp + arr[ind], arr, sums);

        subset_sum(ind + 1, temp, arr, sums);
    }

int main() {
    vector<int> arr = {1, 2, 3};

    vector<int> sums;

    subset_sum(0, 0, arr, sums);

    sort(sums.begin(), sums.end());

    for (int sum : sums) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}