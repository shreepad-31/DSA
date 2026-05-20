#include <bits/stdc++.h>
using namespace std;

// Array which tell how much elements you can jump at max. We have to reach at end.
// Check if we can reach the end.

bool jumpgame1(vector<int> jump_arr){
    int n = jump_arr.size();
    int end = 0;
    for(int i = 0; i < n; i++){
        if(i > end){return false;}

        end = max(end, i + jump_arr[i]);

        if(end >= n - 1){return true;}
    }
    return false;
}

int main(){
    vector<int> sample = {3, 2, 1, 0, 4};
    bool result = jumpgame1(sample);

    if(result){
        cout << "True";
    }
    else{
        cout << "False";
    }

    return 0;
}