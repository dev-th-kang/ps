#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int n, m;
int arr[10];
vector<int> node;
set<vector<int>> s;
bool visitPoint[10];
void dfs(int k)
{
    if (k == m)
    {
        vector<int>v;
        for (int i = 0; i < m; i++)
            v.push_back(arr[i]);
        s.insert(v);
        return;
    }

    for (int i = 0; i < node.size(); i++)
    {
        arr[k] = node[i];
        visitPoint[i] = true;
        dfs(k + 1);
        visitPoint[i] = false;
        
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        node.push_back(x);
    }
    sort(node.begin(), node.end());
    dfs(0);
    for (auto vectorList : s) {
        for (auto vectorElement : vectorList) {
            cout << vectorElement << " ";
        }
        cout << "\n";
    }
}