#include <bits/stdc++.h>
using namespace std;

// Assign Cookie to the element "a" in array such that a <= Cookie Assigned
// greed = {1, 5, 3, 3, 4}
// size = {4, 2, 1, 2, 1, 3}

// We will sort both the array
// Then assign greed array the smallest number greater than or equal to it from size array

int greedy(vector<int> greed, vector<int> size){
    int child_pointer = 0, cookie_pointer = 0;
    int g_size = greed.size(), s_size = size.size();

    sort(greed.begin(), greed.end()); sort(size.begin(), size.end());

    while(child_pointer < g_size && cookie_pointer < s_size){
        if(greed[child_pointer] <= size[cookie_pointer]){
            child_pointer++;
        }
        cookie_pointer++;    
    }

    return child_pointer;
}

int main(){
    vector<int> child = {1, 5, 3, 3, 4};
    vector<int> cookie = {4, 2, 1, 2, 1, 3};

    int result = greedy(child, cookie);
    cout << result;

    return 0;
}