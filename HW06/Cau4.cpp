#include <bits/stdc++.h>
using namespace std;
string reverseString(string s)
{
    if (s.length() == 1)
        return s;
    char c = s[s.length() - 1];
    s.pop_back();
    return c + reverseString(s);
}
int main()
{
    string s;
    cin >> s;
    cout << reverseString(s);
}
