#include<bits/stdc++.h>
using namespace std;

// Given 2 Sorted Array, You have to find the Intersection of those 2 Array

vector<int> IntersectionArray(vector<int> arr1, vector<int> arr2){
    vector<int> intersection_arr;
    int n1 = arr1.size(), n2 = arr2.size();

    int i = 0 , j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] == arr2[j]){
            intersection_arr.push_back(arr1[i]);
            i++; j++;
        }
        else if(arr1[i] < arr2[j]) i++;
        else j++;

    }

    return intersection_arr;
}

int main() {

    vector<int> arr1 = {1, 2, 2, 3, 4, 5, 7, 9};
    vector<int> arr2 = {2, 2, 3, 5, 6, 7, 8, 9, 10};

    vector<int> ans = IntersectionArray(arr1, arr2);

    cout << "Intersection Array: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}