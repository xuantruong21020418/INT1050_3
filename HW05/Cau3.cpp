#include <bits/stdc++.h>

using namespace std;

char minC = '9';

void m(string s, int i) {
    if (s[i] < minC) minC = s[i];
    if (i < s.size() - 1) m(s, i+1);
}
int main() {
    string t;
    cin >> t;
    m(t, 0);
    cout << "Chu so nho nhat la: " << minC;
}