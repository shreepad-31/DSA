#include<bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
    vector<int> div;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);
            if(n/i != i){
                div.push_back(n/i);
            }
        }
        
    }
    return div;
}

int main(){
    vector<int> result;
    result = divisors(36);
    for(auto it : result){
        cout << it << " ";
    }
    return 0;
}