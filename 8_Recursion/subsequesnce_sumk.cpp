#include<bits/stdc++.h>
using namespace std;

// Time Complexity = (2 ^ n) * n

void print_subseq(int ind, vector<int> &ds, vector<int> arr, int n){
    if(ind == n){
        for(auto it : ds) cout << it << " ";
        cout << endl;
        return;
    }

    ds.push_back(arr[ind]);
    print_subseq(ind + 1, ds, arr, n);

    ds.pop_back();
    print_subseq(ind + 1, ds, arr, n);
}

int main(){
    vector<int> sample = {3, 1, 2}, ds;
    int n = sample.size();

    print_subseq(0, ds, sample, n);

    return 0;
}