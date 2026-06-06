#include<bits/stdc++.h>
using namespace std;

// Array with each element repeating exactly twice expect for one unique element
int main(){
    vector<int> arr= {1, 3, 2, 4, 6, 1, 3, 4, 5, 6, 5};
    int n = arr.size(), temp = 0;

    for(auto num : arr){
        temp ^= num;
    }
    cout << "Non repeating number is: " << temp;
    
    return 0;
}