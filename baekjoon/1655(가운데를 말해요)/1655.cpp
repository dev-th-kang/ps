#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#define loop(i, n) for (int i = 0; i < n; i++)
using namespace std;
void init()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
}
int main()
{
    priority_queue<int, vector<int>, greater<int>> right;
    priority_queue<int, vector<int>, less<int>> left;
    vector<int> ans;
    int n;
    init();
    cin >> n;
    loop(i, n)
    {
        int x;
        cin >> x;
        if (left.empty())
            left.push(x);
        else
        {
            if (left.size() > right.size())
                right.push(x);
            else
                left.push(x);

            if (left.top() > right.top())
            {
                int temp = left.top();
                left.pop();
                left.push(right.top());
                right.pop();
                right.push(temp);
            }
        }
        ans.push_back(left.top());
    }
    for (auto a : ans)
        cout << a << "\n";
}