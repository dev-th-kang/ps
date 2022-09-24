#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#define INF 2147483646
#define ans(x) (x==INF? -1 : x)
using namespace std;

int v, e;
vector<pair<int, int>> mat[100001];
int cost[100001];
bool isFail = true;
int dijkstraSearch(int sv, int gv) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	for (int i = 1; i <= v; i++) cost[i] = INF;
	pq.push({ 0, sv });
	cost[sv] = 0;
	while (!pq.empty()) {
		int c = pq.top().first;
		int vv = pq.top().second;
		pq.pop();
		if (vv == gv) return c;
		for (int i = 0; i < mat[vv].size(); i++) {
			int nv = mat[vv][i].first;
			int nc = c + mat[vv][i].second;

				if (cost[nv] > nc) {
					cost[nv] = nc;
					pq.push({ nc,nv });
				}
		}
	}
	isFail = false;
	return 0;
}
int main() {
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		int cv, nv, cost;
		cin >> cv >> nv >> cost;
		mat[cv].push_back({ nv,cost });
		mat[nv].push_back({ cv,cost });
	}
	int v1, v2;
	cin >> v1 >> v2;
	int n1 = dijkstraSearch(1, v1) + dijkstraSearch(v1, v2) + dijkstraSearch(v2, v);
	int n2 = dijkstraSearch(1, v2) + dijkstraSearch(v2, v1) + dijkstraSearch(v1, v);
	int ans = min(n1, n2);

	if (isFail)
		cout << ans;
	else
		cout << -1;
}
