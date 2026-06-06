#include <bits/stdc++.h>
using namespace std;

// Decimal to Binary:

string deci2binary(int n){
    string bi = "";
    while(n > 0){
        bi = (n&1 ? '1' : '0') + bi;
        n = n >> 1;
    }
    return bi;
}

// Binary to Decimal:

int binary2deci(string binary){
    int n = binary.size(), deci = 0;
    for(int i = 0; i < n; i++) if(binary[i] == '1') deci += 1 << n - i - 1;
    return deci;
}


// 1's complement : Take complement of given binary

// 2's complement : Add 1 to 1's complement of given

// Bit Operator:
// AND --> &

// OR --> |

// XOR --> ^ (1^1 = 0^0 = 0; 1^0 = 0^1 = 1)

// Shift
// Right Shift -->   >>  (13 >> 1) = 1101 >> 1 --> 110 = 6 [ x >> k = x / (2^k)]
// Left Shift -->    <<  (13 << 2) = 1101 << 2 --> 110100 = 104 [ x << k = x * (2^k)]

// NOT --> ~   flips all the bits

int main(){

    int num; string binary;
    cin >> num >> binary;
    string binary_res = deci2binary(num); int num_res = binary2deci(binary);

    cout << "Binary of " << num << " is: " << binary_res << endl;
    cout << "Decimal of " << binary << " is: " << num_res << endl;

    return 0;
}