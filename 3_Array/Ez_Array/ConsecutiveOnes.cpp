#include<bits/stdc++.h>
using namespace std;

// Maximum Consecutive Ones in the Array
int maxOnes(int nums[], int n){

    int Maxstreak = 0, streak = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 1){
            streak += 1;
            Maxstreak = max(streak, Maxstreak);
        }
        else{
            streak = 0;
        }
    }

    return Maxstreak;
}

int main() {

    int nums[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Maximum Consecutive Ones: " << maxOnes(nums, n) << endl;

    return 0;
}