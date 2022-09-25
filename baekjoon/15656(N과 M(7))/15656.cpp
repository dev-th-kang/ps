#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int arr[10];
vector<int> node;
bool visitPoint[10001];
void dfs(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 0; i < node.size(); i++)
    {
        arr[k] = node[i];
        visitPoint[node[i]] = true;
        dfs(k + 1);
        visitPoint[node[i]] = false;   
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        node.push_back(x);
    }
    sort(node.begin(), node.end());
    dfs(0);
}