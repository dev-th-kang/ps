#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#define INF 2147483646
#define ans(x) (x==INF? -1 : x)
using namespace std;

vector<pair<int, int>> mat[100001];
int cost[100001];
void dijkstraSearch(int sv) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, sv });
	cost[sv] = 0;
	while (!pq.empty()) {
		int c = pq.top().first;
		int v = pq.top().second;
		pq.pop();
		for (int i = 0; i < mat[v].size(); i++) {
			int nv = mat[v][i].first;
			int nc = c + mat[v][i].second;

			if (cost[nv] == INF) {
				cost[nv] = nc;
				pq.push({ nc,nv });
			}
			else {
				if (cost[nv] > nc) {
					cost[nv] = nc;
					pq.push({ nc,nv });
				}
				else continue;
			}
		}

	}
}
int main() {
	int v, e, sv;
	cin >> v >> e;
	cin >> sv;
	for (int i = 0; i < e; i++) {
		int cv, nv, cost;
		cin >> cv >> nv >> cost;
		mat[cv].push_back({ nv,cost });
		mat[nv].push_back({ cv,cost });
	}
	for (int i = 1; i <= v; i++) cost[i] = INF;
	dijkstraSearch(sv);

	for (int i = 1; i <= v; i++) {
		cout << "vertax " <<i<<": "<< ans(cost[i]) << "\n";
	}

}
