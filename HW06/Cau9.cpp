#include <bits/stdc++.h>

using namespace std;
vector<string> ans;
void dq(int n, int i, string s)
{
    if (n < 0)
        return;
    if (i == 0)
        ans.push_back(s);
    dq(n - 1, i + 1, s + "(");
    if (i > 0)
        dq(n - 1, i - 1, s + ")");
}
bool cmp(string a, string b)
{
    return a.length() < b.length();
}
int main()
{
    int n;
    cin >> n;
    dq(n, 0, "");
    sort(ans.begin(), ans.end(), cmp);
    for (string s : ans)
    {
        cout << s << endl;
    }
    return 0;
}
