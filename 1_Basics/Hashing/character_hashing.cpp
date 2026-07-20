#include<bits/stdc++.h>
using namespace std;

int main(){
    // There total 256 characters, Check ASCII values for indexing
    int hasharr[256] = {0};

    string text = "One Piece (stylized in all caps) is a Japanese manga series written and illustrated by Eiichiro Oda."
    "It follows the adventures of Monkey D. Luffy and his crew, the Straw Hats, as he searches for the legendary treasure"
    "known as the One Piece to become the next King of the Pirates. The manga has been serialized in Shueisha's shōnen"
    "manga magazine Weekly Shōnen Jump since July 1997, with its chapters compiled in 114 tankōbon volumes as of March 2026."
    "It was licensed for an English-language release in North America and the United Kingdom by Viz Media and in Australia"
    "by Madman Entertainment."
    "Becoming a media franchise, it has been adapted into a festival film by Production I.G, and an anime series by Toei"
    "Animation, which premiered in October 1999. Additionally, Toei has developed 14 animated feature films and one original"
    "video animation (OVA). Several companies have developed various types of merchandising and media, such as a trading card"
    "game and video games. Netflix released a live-action TV series in 2023. Another anime series produced by Wit Studio is"
    "scheduled to premiere in 2027.";

    for(int i = 0; i < text.size(); i++) hasharr[text[i]]++;

    for(int i = 0; i < 256; i++) cout << char(i) << " : " << hasharr[i] << endl;
    
    return 0;
}