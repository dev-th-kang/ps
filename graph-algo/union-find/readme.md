# union-find

## parent node init
```c++
  for(int i=1; i<=v; i++) parent[i] = i;
```
> 자기자신을 root로 초기화한다.

## union
```c++
void _union(int x,int y){
    x = _find(x);
    y = _find(y);

    if(x != y) parent[y] = x;
    else parent[x]=y;
}
```
> 집합을 합친다.

## find
```c++
int _find(int x){
    if(x == parent[x]) return  x;
    
    return _find(parent[x]);
}
```
> x가 속한 집합 그래프의 root를 반환한다.


