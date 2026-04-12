#include <bits/stdc++.h>
using namespace std;

// You are lamonade vandor with initial denominations 0
// You sell lemonade at $5 and customer may have $5, $10, $20
// Check whether if you can sell lemonade to all customers 

bool lemonade_bills(vector<int> bill){
    int customers = bill.size();
    int fives = 0, tens = 0;
    for(int i = 0; i < customers; i++){
        if(bill[i] == 5){
            fives += 1;
        }
        else if(bill[i] == 10){
            if(fives == 0){
                return false;
            }
            else{
            fives -= 1; tens += 1;
            }
        }
        else{
            if(tens > 0 && fives > 0){
                tens-- ; fives --;
            }
            else if(fives >= 3){
                fives -= 3;
            }
            else{
            return false;
            }
        }
    }
    return true;
}

int main(){
    vector<int> bill_1 = {5, 5, 5, 5, 10, 5, 10, 10, 10, 20};
    bool result = lemonade_bills(bill_1);
    if(result){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}