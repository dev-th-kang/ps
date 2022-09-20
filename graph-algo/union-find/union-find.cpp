#include <iostream>
using namespace std;
int parent[1001];

int _find(int x){
    if(x == parent[x]) return  x;
    
    return _find(parent[x]);
}
void _union(int x,int y){
    x = _find(x);
    y = _find(y);

    if(x <= y) parent[y] = x;
    else parent[x]=y;
}

int main(){
    int v,e;
    cin >> v >> e;
    for(int i=1; i<=v; i++) parent[i] = i;

    for(int i=0;i<e;i++){
        int x,y;
        cin >>x>>y;
        _union(x,y);
    }
    int findnode1,findnode2;
    cin >> findnode1>>findnode2;

    cout << (_find(findnode1) == _find(findnode2)? "same Parent Node":"Nop")<<"\n";

}