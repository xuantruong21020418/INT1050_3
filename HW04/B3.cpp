#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b) {
    if (b==0) return a;
    else return GCD(b,a%b);
}
int LCM(int a, int b) {
    return (a*b)/GCD(a,b);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << "Uoc chung lon nhat: " << GCD(a,b) << endl;
    cout << "Boi chung nho nhat : " <<LCM(a,b);
}
