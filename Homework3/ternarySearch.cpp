#include <bits/stdc++.h>
using namespace std;
int ternarySearch(int x, int n, int a[])
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m1 = l + (r - l) / 3;
        int m2 = r - (r - l) / 3;
        if (x == a[m1])
            return m1;
        if (x == a[m2])
            return m2;cadc
        if (x < a[m1])
            r = m1 - 1;
        else if (x > a[m2])
            l = m2 + 1;
        else
        {
            l = m1 + 1;
            r = m2 - 1;
        }
    }
    return -1;
}
int main()
{
    int x = 19;
    int a[] = {1,2,3,5,6,7,8,10,12,13,15,16,18,19,20,22};
    int n = sizeof(a) / sizeof(a[0]);
    cout << ternarySearch(x, n, a);
    return 0;
}
