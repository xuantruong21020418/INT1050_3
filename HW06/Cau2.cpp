#include<bits/stdc++.h>

using namespace std;

int ones(string s){
    if (s.length() == 1 && s[0] == '1') return 1;
    else if (s.length() == 1 && s[0] == '0') return 0;
    else if (s[s.length() - 1] == '1')
    {
        s.pop_back();
        return ones(s) + 1;
    }
    else
    {
        s.pop_back();
        return ones(s);
    }
}

int main(){
    string s;
    cin >> s;
    cout << ones(s);
}