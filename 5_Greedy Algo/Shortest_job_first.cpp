#include <bits/stdc++.h>
using namespace std;

// Schedule policy that selects the waiting time with smallest execution time to execute next.

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

// Example 1
    // 1, 2, 3, 4, 7 
    // wait = 0, ex = 0
                                                           
    // wating = ex + waiting                                                       
    // ex = ex + vector[i]

    // wait = 0, ex = 1                                                       
    // wait = 1, ex = 3,                                                        
    // wait = 4, ex = 6,
    // wait = 10, ex = 10,
    // wait = 20 ex = 17

// Example 2
    // 3, 6, 7, 8
    //  w ,,  e
    //  0 ,,  3  p1
    //  3 ,,  9  p2
    // 12 ,, 16  p3
    // 28 ,, 36  p4