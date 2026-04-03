#include<bits/stdc++.h>
using namespace std;

int main(){

    // Map: {key, value}; key, value --> Any Datatype
    // Map stores unique keys in sorted order
    map<int, int> mpp;

    // map<pair<int, int>, int> mpp;

    // map<int, pair<int, int>> mpp;

    mpp[1] = 2;
    mpp.insert({2, 4});
    mpp[{4,3}] = 10;

    return 0;
}