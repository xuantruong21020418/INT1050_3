#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void ones(string s, int i) {
    if (s[i] == '1') cnt ++;
    if (i < s.size()) ones(s, i+1);
}
int main() {
    string t;
    cin >> t;
    ones(t, 0);
    cout << "So bit 1 la: " << cnt;
}