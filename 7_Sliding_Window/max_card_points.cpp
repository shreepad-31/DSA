#include<bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
        int subarray = 0, maximum = 0, n = cardPoints.size();
        for(int i = 0; i < k; i++) subarray += cardPoints[i];
        maximum = subarray;

        for(int i = 0; i < k; i++){
            subarray += cardPoints[n - i - 1] - cardPoints[k - i - 1];
            maximum = max(subarray, maximum);
        }
        return maximum;
    }

int main(){
    vector<int> arr = {2, 3, 4, 2, 1, 3, 5, 7, 2, 1, 8};

    int result = maxScore(arr, 4);

    cout << "Maximum card points is: " << result;

    return 0;
} 