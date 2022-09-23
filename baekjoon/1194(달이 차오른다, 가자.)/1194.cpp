#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct POINT{int x,y;}dir[4]={{1,0},{-1,0},{0,1},{0,-1}};
pair<int,int> nm;
string mat[51];
int visitPoint[64][51][51] = {0, };
int n,m;
bool isMapLimited(int nx,int ny){
    return ((0<=nx) && (nx < n)) && ((0<=ny) && (ny < m));
}
int bfsSearch(int x,int y){
    queue<pair<pair<int,int>,int>> q;
    q.push({{x,y},0});
    visitPoint[0][x][y] = 1;
    while(!q.empty()){
        x = q.front().first.first;
        y = q.front().first.second;
        int key = q.front().second;
        q.pop();
        if(mat[x][y] == '1') return visitPoint[key][x][y]-1;
        for(int i=0;i<4;i++){
            int nx = x + dir[i].x;
            int ny = y + dir[i].y;
            if(!isMapLimited(nx,ny)) continue;
            if(mat[nx][ny] == '#' ) continue;
            if('a'<=mat[nx][ny] && mat[nx][ny] <= 'f'){
                int nkey = key|(1<< (mat[nx][ny]-'a'));
                if(visitPoint[nkey][nx][ny] != 0 ) continue;
                q.push({{nx,ny},nkey});
                visitPoint[nkey][nx][ny]  =visitPoint[key][x][y] +1;
            }else if('A'<=mat[nx][ny] && mat[nx][ny] <= 'F'){
                int cKey = key &(1<< (mat[nx][ny]-'A'));
                if(cKey ==0|| visitPoint[key][nx][ny] !=0) continue;;
                q.push({{nx,ny},key});
                visitPoint[key][nx][ny]  =visitPoint[key][x][y] +1;
            }else{
                if(visitPoint[key][nx][ny] !=0) continue;
                q.push({{nx,ny},key});
                visitPoint[key][nx][ny]  =visitPoint[key][x][y] +1;
            }
        }
    }
    return -1;
}
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> mat[i];
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j] == '0') nm = {i,j};
        }
    }
    cout << bfsSearch(nm.first, nm.second);
}