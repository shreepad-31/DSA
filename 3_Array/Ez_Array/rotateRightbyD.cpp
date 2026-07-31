#include<bits/stdc++.h>
using namespace std;

// Right Rotating Array by D places to the Left

void rotateRightbyD(int nums[], int n, int d){
    d = d % n;

    reverse(nums + (n - d), nums + n);
    reverse(nums, nums + (n - d));
    reverse(nums, nums + n);

}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int d = 2;

    cout << "Array before right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    rotateRightbyD(nums, n, d);

    cout << "\nArray after right rotation: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}