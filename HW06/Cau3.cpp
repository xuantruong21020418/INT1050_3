#include<bits/stdc++.h>

using namespace std;

char m(string s){
    if (s.length() == 1) return s[0];
    else{
        char x = s[0];
        s.erase(s.begin());
        return min(x,m(s));
    }
}

int main(){
    string s;
    cin >> s;
    cout << m(s);
}