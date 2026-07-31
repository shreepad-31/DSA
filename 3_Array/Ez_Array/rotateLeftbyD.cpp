#include<bits/stdc++.h>
using namespace std;

// Left Rotating Array by D places to the Left

// Brute Force:
//     Store first (d % n) elements in a temp Array
//     Shift the Array by (d % n) and then at last Paste the temp elements
//     Just like LeftShift by one but now take list since multiple elements

// Optimal Solution: 
// TC = O(2N) but SC = O(1)

void rotateLeftbyD(int nums[], int n, int d){
    d = d % n;

    reverse(nums, nums + d);
    reverse(nums + d, nums + n);
    reverse(nums, nums + n);

}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int d = 2;

    cout << "Array before left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    rotateLeftbyD(nums, n, d);

    cout << "\nArray after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}