#include <iostream>
#define robotFunc1(x) (((x==0)?3:x-1)) //왼쪽
#define robotFunc2(x) (((x + 2) >= 4) ?  x-2 : x+2) //후진
using namespace std;
struct ROBOT{int x,y,d;};
struct POINT{int x,y;}dir[4] ={{-1,0},{0,1},{1,0},{0,-1}};
ROBOT start;
int n,m;
int ans;
int mat[51][51];
int visitPoint[51][51]={0,};

//북0 동1 남2 서3
bool isMapLimited(int nx,int ny){
    return (0<=nx && nx<n) && (0<=ny && ny<m);
}
void dfs(int x,int y, int d){
    if(visitPoint[x][y] == 0 && mat[x][y] == 0){
        visitPoint[x][y] = 1;
        ans ++;
    }
    //왼쪽으로 움직이고 체크
    //북 서 남 동

    //최저 -3 
    for(int i=robotFunc1(d);  robotFunc1(d)-3<= i ; i--){
        int nd = i;
        if(nd < 0) nd += 4;

        int nx = x + dir[nd].x;
        int ny = y + dir[nd].y;
        if(!isMapLimited(nx,ny)) continue;
        if(mat[nx][ny] == 0 && visitPoint[nx][ny] == 0) dfs(nx,ny,nd);
    }
    
    int nd = robotFunc2(d);
    int nx = x + dir[nd].x;
    int ny = y + dir[nd].y;

    if(mat[nx][ny] == 0) dfs(nx,ny,d);
    
    cout << ans;
    exit(0);
}
int main(){
    cin >> n >> m;
    cin >> start.x >> start.y >> start.d;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
        }
    }
    dfs(start.x, start.y, start.d);
}