#include <bits/stdc++.h>
using namespace std;

// Swap using XOR
void SwapNums() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After Swapping:\n";
    cout << "a = " << a << ", b = " << b << endl << endl;
}

// Check ith bit
void checkBit() {
    int num, i;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit index: ";
    cin >> i;

    if (((num >> i) & 1) != 0) {
        cout << "Bit is SET\n\n";
    }
    else {
        cout << "Bit is NOT SET\n\n";
    }
}

// Set ith bit
void setBit() {
    int num, i;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit index: ";
    cin >> i;

    int res = num | (1 << i);

    cout << "After Setting Bit: " << res << endl << endl;
}

// Clear ith bit
void clearBit() {
    int num, i;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit index: ";
    cin >> i;

    int res = num & ~(1 << i);

    cout << "After Clearing Bit: " << res << endl << endl;
}

// Toggle ith bit
void toggleBit() {
    int num, i;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit index: ";
    cin >> i;

    int res = num ^ (1 << i);
    cout << "After toggling the Bit: " << res << endl << endl;
}

// Changes last set bit
void lastSetBit(){
    int num;

    cout << "Enter number: ";
    cin >> num;
    for(int i = 0; i < 32; i++){

    }
}

// Checks if given number is power of two
void pow2(){
    int num;

    cout << "Enter number: ";
    cin >> num;

}

void countSetBit(){
    int num;

    cout << "Enter number: ";
    cin >> num;

}

void showMenu(){

    cout << "1. Swap Two Numbers\n";
    cout << "2. Check ith Bit\n";
    cout << "3. Set ith Bit\n";
    cout << "4. Clear ith Bit\n";
    cout << "5. Toggle ith Bit\n";
    cout << "6. Change last bit\n";
    cout << "7. Check if it 2's Power\n";
    cout << "8. Count number of Set Bits\n";
    cout << "0. Exit Program\n";

    cout << "Enter Choice: ";
}

int main() {

    int choice;

    do{
        showMenu();
        cin >> choice;

        cout << endl;

        switch(choice){

            case 1:
                SwapNums();
                break;

            case 2:
                checkBit();
                break;

            case 3:
                setBit();
                break;

            case 4:
                clearBit();
                break;

            case 5:
                toggleBit();
                break;

            case 6:
                lastSetBit();
                break;

            case 7:
                pow2();
                break;

            case 8:
                countSetBit();
                break;

            case 0:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    }while (choice != 0);

    return 0;
}