#include<bits/stdc++.h>
using namespace std;

int main(){
    // Data Types
    // int, long, long long
    // float, double
    // string(""), getline(cin, vari)
    // char('')

    // If Else Statement
    int age;

    cin >> age;

    if(age < 18){
        cout << "Not eligible for the job" << endl;
    }
    else if(age <= 57){
        cout << "Eligible for the job" << endl;
        if(age >= 55){
            cout << ", but retirement soon" << endl;
        }
    }
    else{
        cout << "Retirement time" << endl;
    }
    
    

    // Switch Condition
    int day;
    cin >> day;
    
    switch(day){
        case 1:
        cout <<"Monday" << endl;
        break;
        case 2:
        cout <<"Tuesday" << endl;
        break;
        case 3:
        cout <<"Wednesday" << endl;
        break;
        case 4:
        cout <<"Thursday" << endl;
        break;
        case 5:
        cout <<"Friday" << endl;
        break;
        case 6:
        cout <<"Saturday" << endl;
        break;
        case 7:
        cout <<"Sunday" << endl;
        break;
        default :
        cout <<"Invalid" << endl;
        break;
        
    }

    // for loop
    for(int i=1; i <= 10; i++){
        cout << "I am " << i << "th loop." << endl;
    }

    // while loop
    int n = 1;
    while(n <= 5){
        cout << n << endl;
        n = n + 1;
    }

    // do while loop
    int m = 1;
    do{
        cout << "jai_modi_ji" << endl;
        m = m + 1;
    } while(m <= 0);
    return 0;
    
}