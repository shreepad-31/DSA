#include<bits/stdc++.h>
using namespace std;

// Adjecent Swaps

// Time Complexity:
// Best O(N)
// Worst O(N^2)
// Average O(N^2)

// Space Complxity O(N)

vector<int> bubble_sort(vector<int> arr, int n){

    for(int i = 0; i < n - 1; i++){
        bool swapped = false;

        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    return arr;
}

int main(){
    vector<int> sample = {64, 25, 12, 22, 11};
    int n = sample.size();

    vector<int> result = bubble_sort(sample, n);

    for(int i = 0; i < n; i++) cout << result[i] << " ";
    
    return 0;
}