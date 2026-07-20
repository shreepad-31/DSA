#include<bits/stdc++.h>
using namespace std;

// Hash Array for a string containing only lower case characters

int main(){
    int hasharr[26] = {0}; string text;
    text = "sabpbeofbabfowhvsipbheifbi";
    
    for(int i = 0; i < text.size(); i++) hasharr[text[i] - 'a']++;

    for(int i = 0; i < 26; i++) cout << char('a' + i) << " : " << hasharr[i] << endl;

    return 0;
}