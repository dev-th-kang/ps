#include <iostream>
using namespace std;
// TODO: union-Find
int parent[1000001];
int _find(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = _find(parent[x]);
}
void _union(int x, int y)
{
    x = _find(x);
    y = _find(y);
    if (x != y)
        parent[y] = x;
}
bool sameNode(int x, int y)
{
    x = _find(x);
    y = _find(y);
    if (x == y)
        return true;
    return false;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    for (int i = 0; i < m; i++)
    {
        int sw;
        cin >> sw;
        int x, y;
        cin >> x >> y;
        if (sw == 0)
        {
            _union(x, y);
        }
        else
        {
            if (sameNode(x, y))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}