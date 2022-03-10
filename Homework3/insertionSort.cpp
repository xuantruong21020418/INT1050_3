#include <bits/stdc++.h>
using namespace std;
int cnt;
void insertionSort(int n, int a[])
{
    for (int j = 1; j < n; j++)
    {
        cnt = 0;
        int i = 0;
        while (a[j] > a[i])
        {
            i++;
            cnt++;
        }
        cout << cnt << "\n";
        int m = a[j];
        for (int k = 0; k <= j - i - 1; k++)
            a[j - k] = a[j - k - 1];
        a[i] = m;
    }
}
int main()
{
    int a[] = {7,4,3,8,1,5,4,2};
    int n = sizeof(a) / sizeof(a[0]);
    insertionSort(n, a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
