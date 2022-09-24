#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 2147483645
using namespace std;

vector<pair<int, int>> mat[100001];
int costList[100001];
int n;
void dijkstra(int x) {
    for (int i = 1; i <= n; i++) costList[i] = INF;

    priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({ 0,x });
    costList[x] = 0;
    
    while (!pq.empty()) {
        int cost = pq.top().first;
        x = pq.top().second;
        pq.pop();
        for (int i = 0; i < mat[x].size(); i++) {
            int nx = mat[x][i].first;
            int nc = mat[x][i].second + cost;
            if (costList[nx] > nc) {
                costList[nx] = nc;
                pq.push({ nc,nx });
            }
            else continue;
        }
    }

}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int posV;
        cin >> posV;
        while (1) {
            int disV, w;
            cin >> disV;
            if (disV == -1)break;
            cin >> w;
            mat[posV].push_back({ disV,w });
            mat[disV].push_back({ posV,w });
        }
    }

    dijkstra(1);
    int ans = -1;
    int ansIdx = -1;
    for (int i = 1; i <= n;i++) {
        if (costList[i] == INF)continue;
        if (ans < costList[i]) {
            ans = costList[i];
            ansIdx = i;
        }
    }
    dijkstra(ansIdx); 
    int ans2=-1;
    for (int i = 1; i <= n; i++) {
        if (ans2 < costList[i]) {
            ans2 = costList[i];
        }
    }
    cout << ans2;
}
