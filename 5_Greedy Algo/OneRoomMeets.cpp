#include <bits/stdc++.h>
using namespace std;

// You have given start and end time of meeting in a room.
// You have to maximise the number of meetings.
// You may have to return meeting number order or number of meetings.


int meetings(){
    int count = 0;

    return count;
}

bool cmp(int a, int b) {return a > b;}

int main(){
    int n;
    cout << "Enter Number of Meets: "; cin >> n;

    vector<pair<int, int>> meetings(n);
    
    cout << "\nEnter Each Interval: " << endl;
    for(int i = 0; i < n; i++) cin >> meetings[i].first >> meetings[i].second;

    sort()


    return 0;
}



// strt = {0, 3, 1, 5, 5, 8}
// end  = {5, 4, 2, 9, 7, 9}