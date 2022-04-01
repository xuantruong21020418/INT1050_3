#include <bits/stdc++.h>
using namespace std;
vector <string> bracket;
void balancedBracket(int n, int i, int j, string s)
{
    if (i + j <= n && i == j)
        bracket.push_back(s);
    if (i + j == n)
        return ;
    if (i < n / 2)
        balancedBracket(n, i + 1, j, s + "(");
    if (i > j)
        balancedBracket(n, i, j + 1, s + ")");
}
bool cmp(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    balancedBracket(6, 0, 0, "");
    sort(bracket.begin(), bracket.end(), cmp);
    for (string s: bracket)
        cout << s << "\n";
}