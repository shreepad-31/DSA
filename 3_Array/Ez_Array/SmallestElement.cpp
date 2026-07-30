#include<bits/stdc++.h>
using namespace std;

// Smallest Element and Second Smallest Element
pair<int, int> SmallestElement(int arr[], int n){
    int smallest = arr[0], secondSmallest = INT_MAX;
    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && smallest != arr[i]) secondSmallest = arr[i];
    }

    return {smallest, secondSmallest};
}

int main(){

    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> ans = SmallestElement(arr, n);

    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << "\nSmallest Element: " << ans.first;

    if(ans.second == INT_MAX)
        cout << "\nNo Second Smallest Element";
    else
        cout << "\nSecond Smallest Element: " << ans.second;

    return 0;
}