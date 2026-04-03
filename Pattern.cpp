#include<bits/stdc++.h>
using namespace std; 

int main(){
    int pattern;
    cin >> pattern;

    switch (pattern)
    {
    case 1:
    // * * * *
    // * * * *
    // * * * *
    // * * * *

        for(int i = 0; i < 4; i++){           
            for(int j = 0; j < 4; j++){
                cout << "* ";
            }
            cout << endl;
        }
        break;
    case 2:
    // *
    // * *
    // * * * 
    // * * * *
    // * * * * *

        for(int i = 0; i < 5; i++){
            for(int j = 0; j <= i; j++){
                cout << "* ";
            }
            cout << endl;
        }
        break;
    case 3:
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

        for(int i = 0; i < 5; i++){
            for(int j = 0; j <= i; j++){
                cout << j + 1 << " ";
            }
            cout << endl;
        }
        break;
    case 4:
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

        for(int i = 0; i < 5; i++){
            for(int j = 0; j <= i; j++){
                cout << i + 1 << " ";
            }
            cout << endl;
        }
        break;
    case 5:
    // * * * * *
    // * * * *
    // * * *
    // * * 
    // * 

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5 - i; j++){
                cout << "* ";
            }
            cout << endl;
        }
        break;
    case 6:
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5 - i; j++){
                cout << j + 1 << " ";
            }
            cout << endl;
        }
        break;
    case 7:
        //     *
        //    ***
        //   *****
        //  *******
        // *********

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4 - i; j++){
                cout << " ";
            }
            for (int k = 0; k < (2 * i + 1); k++){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 8:
    // *********
    //  *******
    //   *****
    //    ***
    //     *

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for (int k = 0; k < (9 - 2 * i); k++){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 9:
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 4 - i; j++){
                cout << " ";
            }
            for (int k = 0; k < (2 * i + 1); k++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for (int k = 0; k < (9 - 2 * i); k++){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 10:
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

        for(int i = 0; i < 9; i++){
            for(int j = 4; j >= abs(i - 4); j--){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 11:
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1
        for(int i = 1; i < 6; i++){
            int temp = i % 2;
            for(int j = 0; j < i; j++){
                cout << temp << " " ;
                temp = 1 - temp;
            }
            cout << endl;
        }
        break;
    case 12:
    // 1      1
    // 12    21
    // 123  321
    // 12344321
        for(int i = 1; i < 5; i++){
            for(int j = 1; j <= i; j++){
                cout << j;
            }
            for(int j = 0; j < 8 - 2 * i; j++){
                cout << " ";
            }
            for(int j = i; j > 0; j--){
                cout << j;
            }
            cout << endl;
        }
        break;
    case 13:
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    {int num = 1;
        for(int i = 0; i < 5; i++){
            for(int j = 0 / 2; j <= i; j++){
                cout << num << " ";
                num++;
            }
            cout << endl;
        }}
        break;
    case 14:
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
        for(int i = 0; i < 5; i++){
            for(char ch = 'A'; ch < 'A' + (i + 1); ch++){
                cout << ch;
            }
            cout << endl;
        }
        break;
    case 15:
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
        for(int i = 0; i < 5; i++){
            for(char ch = 'A'; ch < 'A' + (5 - i); ch++){
                cout << ch;
            }
            cout << endl;
        }
        break;
    case 16:
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE
        for(int i = 0; i < 5; i++){
            char ch = 'A' + i;
            for(int j = 0; j <= i; j++){
                cout << ch;
            }
            cout << endl;
        }
        break;
    case 17:
    //    A
    //   ABA
    //  ABCBA
    // ABCDCBA
        for(int i = 0; i < 4; i++){
            char ch = 'A';
            int breakpoint = (2 * i + 1) / 2;
            for(int j = 0; j < 4 - i - 1; j++){
                cout << " ";
            }
            for(int j = 0; j < 2 * i + 1; j++){
                cout << ch;
                if(j < breakpoint){
                    ch++;
                }
                else{
                    ch--;
                }
            }
            cout << endl;
        }
        break;
    case 18:
    // E
    // D E
    // C D E
    // B C D E
    // A B C D E
        for(int i = 0; i < 5; i++){
            for(char ch = 'E' - i; ch <= 'E'; ch++){
                cout << ch << " ";
            }
            cout << endl;
        }
        break;
    case 19:
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
        for(int i = 0; i < 5; i++){
            for(int j = 5; j > i; j--){
                cout << "*";
            }
            for(int j = 0; j < 2 * i; j++){
                cout << " ";
            }
            for(int j = 5; j > i; j--){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = 0; i < 5; i++){
            for(int j = 0; j <= i; j++){
                cout << "*";
            }
            for(int j = 8; j > 2 * i; j--){
                cout << " ";
            }
            for(int j = 0; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
        break;
    case 20:
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
            for(int i = 0; i < 2 * 5 - 1; i++){
            for(int j = 0; j < 5 - abs(i - 4); j++){
                cout << "*";
            }
            for(int j = 0; j < abs(8 - 2 * i); j++){
                cout << " ";
            }
            for(int j = 0; j < 5 - abs(i - 4); j++){
                cout << "*";
            }
            cout << endl;
        }
// Alternate Solution:
        // for(int i = 0; i < 9; i++){
        //     int stars = 5 - abs(i - 4);
        //     int spaces = abs(8 - 2 * i);
        //     cout << string(stars, '*') << string(spaces, ' ') << string(stars, '*')<< '\n';
        // }
        break;
    case 21:
    // ****
    // *  *
    // *  *
    // ****

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(j == 0 || i == 0 || i == 3 || j == 3){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 22:
    // 4 4 4 4 4 4 4
    // 4 3 3 3 3 3 4
    // 4 3 2 2 2 3 4
    // 4 3 2 1 2 3 4
    // 4 3 2 2 2 3 4
    // 4 3 3 3 3 3 4
    // 4 4 4 4 4 4 4
        for(int i = 0; i < 2 * 4 - 1; i++){
            for(int j = 0; j < 2 * 4 - 1; j++){
                cout << " ";
            }
            cout << endl;
        }
        break;
    
    default:
        cout << "Invalid Pattern" << endl;
        break;
    }

    return 0;
}