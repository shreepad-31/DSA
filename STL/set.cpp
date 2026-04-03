#include<bits/stdc++.h>
using namespace std;

int main(){

// SET -- Unique and Sorted

    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.emplace(2); // {1, 2}
    st.emplace(4); // {1, 2, 4}
    st.insert(6); // {1, 2, 4, 6}
    st.insert(3); // {1, 2, 3, 4, 6} // Set is Sorted
    st.emplace(5); // {1, 2, 3, 4, 5, 6}

    // end(), rend(), begin(), rbegin(), size(), empty(), swap() are same as vectors

    // {1, 2, 3, 4, 5, 6}
    auto it = st.find(3); // Points to 3
    auto it = st.find(7); // Points where end() points since element dne

    st.erase(5); // {1, 2, 3, 4, 6}

    int cnt = st.count(1); // if exist cnt = 1, else cnt = 0

    auto it = st.find(3);
    st.erase(it); // {1, 2, 4, 6}

    auto it1 = st.find(2);
    auto it2 = st.find(6);

    st.erase(it1, it2); // {1, 6} erases [first, end)

    set<int> st = {1, 2, 3, 4, 5, 6};
    auto it = st.lower_bound(2);
    auto it = st.lower_bound(3);

    // https://youtu.be/edJ19qIL8WQ?si=k2KPJRpI2GbiO9A5 --> Learn from here

    return 0;
}