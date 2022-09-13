#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> mat[1001];
int visitPoint[1001] = { 0, };

void directed_dfsSearch(int v) {
	visitPoint[v] = 1;
    cout << v <<" ";
    for(int i=0; i<mat[v].size();i++){
        if(visitPoint[mat[v][i]] == 0) directed_dfsSearch(mat[v][i]); 
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
	
	for (int i = 0; i < e; i++) sort(mat[i].begin(), mat[i].end());
	
	directed_dfsSearch(sv);
	
}
