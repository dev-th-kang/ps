#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> mat[1001];
int visitPoint[1001] = { 0, };

void directed_bfsSearch(int v) {
	queue<int> q;
	q.push(v);
	cout << v << " ";
	visitPoint[v] = 1;
	while (!q.empty()) {
		v = q.front();
		q.pop();
		for (int i = 0; i < mat[v].size(); i++) {
			int nv = mat[v][i];

			if (visitPoint[nv] == 0) {
				visitPoint[nv] = 1;
				q.push(nv);
				cout << nv << " ";
			}
		}
	}
}

int main() {
	int v, e, sv;
	cin >> v >> e;
	cin >> sv;
	for (int i = 0; i < e; i++) {
		int cv, nv;
		cin >> cv >> nv;
		mat[cv].push_back(nv);
	}
	
	for (int i = 0; i < e; i++)sort(mat[i].begin(), mat[i].end());
	
	directed_bfsSearch(sv);
	
}
