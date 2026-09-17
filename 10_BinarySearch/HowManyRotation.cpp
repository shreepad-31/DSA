#include<bits/stdc++.h>
using namespace std;

int howMuchRotations(vector<int> nums){
    int n = nums.size(), high = n - 1, low = 0, mid, ans = n - 1;

    while(low <= high){
        mid = (low + high) / 2;

        if(nums[mid] < nums[ans]) ans = mid;

        if(0)
    }

    return ans;
}

int main(){
    


    return 0;
}