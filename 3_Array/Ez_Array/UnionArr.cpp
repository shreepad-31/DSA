#include<bits/stdc++.h>
using namespace std;

// You are give 2 Sorted Arrays
// Make a Separate Array with Union of those 2 Array

// Brute Solution:
//     Make a set and traverse and insert elements of both array in set
//     Now iterate on set of make the union Array

// Optimal Solution:

vector<int> UnionArray(vector<int> arr1, vector<int> arr2){
    int n1 = arr1.size(), n2 = arr2.size();
    vector<int> union_arr;

    int i = 0, j = 0;
    
    while(i < n1 && j < n2){

        if(arr1[i] <= arr2[j]){
            if(union_arr.size() == 0 || union_arr.back() != arr1[i]) union_arr.push_back(arr1[i]);
            i++;
        }

        else{
            if(union_arr.size() == 0 || union_arr.back() != arr2[j]) union_arr.push_back(arr2[j]);
            j++;
        }
    }

    while(i < n1){
        if(union_arr.size() == 0 || union_arr.back() != arr1[i]) union_arr.push_back(arr1[i]);
        i++;
    }

    while(j < n2){
        if(union_arr.size() == 0 || union_arr.back() != arr2[j]) union_arr.push_back(arr2[j]);
        j++;
    }

    return union_arr;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4, 5, 5, 7, 9};
    vector<int> arr2 = {2, 2, 3, 5, 6, 7, 8, 9, 10};

    vector<int> ans = UnionArray(arr1, arr2);

    cout << "Union Array: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}