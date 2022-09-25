#include <iostream>
using namespace std;
int n, m;
int arr[10];
bool visitPoint[10];
void dfs(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visitPoint[i])
        {
            arr[k] = i;
            visitPoint[i] = true;
            dfs(k + 1);
            visitPoint[i] = false;
        }
    }
}
int main()
{
    cin >> n >> m;
    dfs(0);
}