#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[2309];
int d[2309];
int n, m;
vector<pair<int, int>> edge;
void bfs()
{
    int u, i, v;
    queue<int> qu;
    qu.push(5);
    d[5] = 1;
    while (qu.size())
    {
        u = qu.front();
        qu.pop();
        cout <<u<<':'<<endl;
        for (int i = 0; i < a[u].size(); i++)
        {
            int v = a[u][i];
            if (d[v] == 0)
            {
                cout <<v<<' ';
                d[v] = d[u] + 1;
                qu.push(v);
                edge.push_back({u, v});
            }
        }
        cout <<endl;
    }
}

int main()
{
    freopen("test.inp","r",stdin);
    freopen("test.out","w",stdout);
    cin >> n >> m;
    while (m--)
    {
        int p, q;
        cin >> p >> q;
        a[p].push_back(q);
        a[q].push_back(p);
    }
    bfs();
    cout <<"Cac canh trong cay khung: \n";
    for (int i = 0; i < edge.size(); i++)
        cout << edge[i].first << ' ' << edge[i].second << endl;
}