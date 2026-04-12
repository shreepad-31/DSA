#include <bits/stdc++.h>
using namespace std;

// Schedule policy that selects the waiting time with shortests execution time to execute next.

int sjf(vector<int> burstTime){
    sort(burstTime.begin(), burstTime.end());
    int WaitingTime = 0, executionTime = 0;
    int n = burstTime.size();
    for(int i = 0; i < n; i++){
        WaitingTime += executionTime;
        executionTime += burstTime[i];
    }

    return WaitingTime;
}

int main(){
    vector<int> sample = {6, 8, 7, 3};
    int result = sjf(sample);
    cout << result;
    return 0;
}