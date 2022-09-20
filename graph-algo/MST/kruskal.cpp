#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,pair<int,int>>> mat;
int parent[1001];
int _find(int x) {
    if (parent[x] == x) return x;
    return parent[x] =_find(parent[x]);
}
void _union(int x,int y) {
    x = _find(x);
    y = _find(y);
    if (x <= y) parent[y] = x;
    else parent[x] = y;
}
bool sameParent(int x, int y) {
    x = _find(x);
    y = _find(y);
    if (x == y) return true;
    else return false;
}
int main() {
    int v, e;
    cin >> v >> e;
    for (int i = 1; i <= v; i++) parent[i] = i;
    for (int i = 0; i < e; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        mat.push_back({ w,{y,x}});
        mat.push_back({ w,{x,y}});
    }
    // 가중치별로 오름차순 정렬
    sort(mat.begin(), mat.end());
 
    int ans = 0;
    for (int i = 0; i < mat.size(); i++) {
        // 가중치가 낮은 vertax 2개가 연결되어있지않으면, 연결
        if (!sameParent(mat[i].second.first, mat[i].second.second)) {
            _union(mat[i].second.first, mat[i].second.second);
            ans += mat[i].first;
        }
    }
    cout << ans;
}