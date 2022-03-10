#include <bits/stdc++.h>
using namespace std;
int binarySearch(int x, int n, int a[])
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}
void insertionSort(int n, int a[])
{
    for (int j = 1; j < n; j++)
    {
        int i = binarySearch(a[j], j, a);
        cout << i << " ";
        int m = a[j];
        for (int k = 0; k <= j - i - 1; k++)
            a[j - k] = a[j - k - 1];
        a[i] = m;
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}
int main()
{
    int a[] = {3,2,4,5,1,6};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(n, a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
