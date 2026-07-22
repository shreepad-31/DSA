#include<bits/stdc++.h>
using namespace std;

// TC : O(N^2)

vector<int> selection_sort(vector<int> arr,int n){

    int min_ind, temp;

    for(int i = 0; i < (n - 1); i++){
        min_ind = i;
        for(int j = i; j < n; j++){
            if(arr[min_ind] > arr[j]){
                min_ind = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_ind];
        arr[min_ind] = temp;
    }

    return arr;
}

int main(){
    vector<int> sample = {64, 25, 12, 22, 11};
    int n = sample.size();

    vector<int> result = (selection_sort(sample, n));

    for(int i = 0; i < n; i++) cout << result[i] << " ";
    
    return 0;
}