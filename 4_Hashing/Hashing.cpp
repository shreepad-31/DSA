#include <bits/stdc++.h>
using namespace std;

// Hashing- Prestoring and Fetching 

int main(){
    
    // Array with input in range [1, 12]

    //Pre-Storing
    int arr[] = {1,3,4,6,2,6,9,4,2,4,7,5,9,8,5,10,11,4,3,2,12};
    int hash_arr[13] = {0};
    for(int i = 0; i < arr.size(); i++){
        hash_arr[arr[i]] += 1;
    }
 
    return 0;
}