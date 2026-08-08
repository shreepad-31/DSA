#include<bits/stdc++.h>
using namespace std;

// Return the lenght of longest subarray with the sum k
// Given that the Array has all positive integers

int LongestSubarray(int nums[], int n, int k){
    int lenght = 0, maxLenght = -1, left = 0, right = 0, subarr = 0;
    while(right < n){

        if(subarr < k){
            subarr += nums[right];
            lenght++;
            right++;
        }

        else if(subarr > k){
            subarr -= nums[left];
            left++;
            lenght--;
        }
        else{
            maxLenght = max(maxLenght, lenght);
            right++;
        }
    }
}

int main(){
    

    return 0;
}