#include <bits/stdc++.h>

using namespace std;

void reverse(string& s, int i) {
    int size = s.length(); 
    swap(s[i], s[size - i - 1]);
    if (size % 2 == 1) {
        if (i < size/2) reverse(s, i+1);
    }
    else {
        if (i < size/2 - 1) reverse(s, i+1);
    }
}

int main() {
    string t;
    cin >> t;
    reverse(t, 0);
    cout << t;
}