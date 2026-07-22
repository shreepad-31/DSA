#include<bits/stdc++.h>
using namespace std;

// TC : 

vector<int> insertion_sort(vector<int> arr, int n){

    for(int i = 0; i < n - 1; i++){
        int j = i;
        while(arr[j + 1] < arr[j] && j > 0){
            if(arr[j + 1] < arr[j]) swap(arr[j + 1], arr[j]);
            j--;
        }
    }

    return arr;
}

int main(){
    vector<int> sample = {64, 25, 12, 22, 11};
    int n = sample.size();

    vector<int> result = (insertion_sort(sample, n));

    for(int i = 0; i < n; i++) cout << result[i] << " ";
    
    return 0;
}