#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1); // Increases size and pushes "1"
    v1.emplace_back(2); // Similar but faster //

    vector<pair<int, int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2); // Assumes 1,2 as pair so no need of {1,2} // 

    vector<int> v3(5, 100); // Vector of size "5" with instances "100   "

    vector<int> v4(5); // Vector with size "5"

    vector<int> v5(v4); // Creates copy of Vector v4

    // Accessing the Elements

    cout << v1[0] << " " << v1.at(1) << endl;

    // ITRATORS
    vector<int> v = {1,2,3,4,5};
    vector<int>::iterator it = v.begin(); // v.begin() is pointer at first index
    // auto it = v.begin(); // Rather simpler and Modern C++ 

    cout << *(it) << endl; // it++ to increase the index

    // "auto" means auto assination, don't want to write data type just write "auto"

    auto it_end = v.end(); // End points right after the last element
    auto it_rend = v.rend(); // It reverses the vector and then same as end
    auto it_rbegin = v.rbegin(); // It reverses the vector and then same as begin

    // v.back() --> Points to Last Element

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    // Erase Function
    // v = {1, 2, 3, 4, 5}
    v.erase(v.begin() + 1); // {1, 3, 4, 5}
    v.erase(v.begin() + 1, v.begin() + 3); // {1, 4, 5}

    //Insert Function

    // v = {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    // Other Function
    // v == {4, 5}
    cout << v.size() << endl; // 2

    v.pop_back(); // {2}

    sort(v.begin(), v.end()); // for sorting

    //v1 = {2, 3}, v3 = {4, 5}
    v1.swap(v3); // v3 = {2, 3}, v1 = {4, 5}

    v.clear(); // Erases entire vector // v ={}

    cout << v.empty() << endl; // It a bool. If vector is empty then True, else False
    return 0;
}