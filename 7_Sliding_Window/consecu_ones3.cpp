#include<bits/stdc++.h>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, max_len = 0;

        while(right < nums.size()){
            if(nums[right] == 0){
                k--;
            }
            if(k < 0){
                if(nums[left] == 0) k++;
                left++;
            }
            max_len = right - left + 1;
            right++;
        }
        return max_len;
    }

int main(){
    
    vector<int> arr = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int result = longestOnes(arr, 3);

    cout << "Maximum Length is: " << result;
    
    return 0;
} 