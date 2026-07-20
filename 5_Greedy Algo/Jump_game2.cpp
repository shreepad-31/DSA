#include <bits/stdc++.h>
using namespace std;

// Return the minimum number of jumps required to reach the end.
// It is guaranted that we will reach end.


// Brute Using Recursion:
int jump_recur(vector<int> jump_arr){
    int jumps;


    return jumps;
} // Time Complexity is N^(N)


// Better Solution Using DP:
int jump(vector<int> jump_arr){
    int jumps;


    return jumps;
} // Time Complexity is N^(2)


// Optimal Solution Greedy Approach: 
int jumpgame2(vector<int> jump_arr){
    int jumps = 0, left = 0, right = 0, n = jump_arr.size(), farthest;
    while(right < n - 1){
        farthest = 0;
        for(left; left <= right; left++) farthest = max(farthest, left + jump_arr[left]);
        left = right + 1; jumps++;
        right = farthest;

    }
    return jumps;
} // Time Complexity is N

int main(){
    vector<int> sample = {2, 3, 1, 1, 4};
    int result = jumpgame2(sample);

    cout << "Least Number of Jumps Required to Reach End is: " << result;

    return 0;
}