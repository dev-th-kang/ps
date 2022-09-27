#include <iostream>
#include <cstring>
#include <queue>
// 절대값
#define absV(x) (((x) > 0)? (x): -(x))
using namespace std;

struct POINT {
	int x;
	int y;
};
POINT store[100];
POINT goal;
POINT home;

int N;
bool visited[100];

// 편의점 없이 갈 수 있는 최대 거리 1,000m (50 m * 20)
void bfsSearch() {
	queue <POINT> q;
	q.push(home); // 시작

	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		q.pop();

		if (absV(x - goal.x) + absV(y - goal.y) <= 1000) {
			printf("happy\n");
			return;
		}

		//가게!
		for (int i = 0; i < N; i++) {
			if (visited[i] == true)continue;
			int d = absV(x - store[i].x) + absV(y - store[i].y);
			if (d <= 1000) {
				visited[i] = true;
				q.push({ store[i].x, store[i].y });
			}
		}
	}

	printf("sad\n");
	return;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(visited, 0, sizeof(visited)); 
		cin >> N;
		cin >> home.x >> home.y;
		for (int i = 0; i < N; i++) {
			cin >> store[i].x >> store[i].y;
		}
		cin >> goal.x >> goal.y;
		bfsSearch();
	}
}