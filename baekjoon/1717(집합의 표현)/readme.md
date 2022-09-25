# [1717(집합의 표현)](1717.cpp)

```이 문제는 a노드와 b노드가 같은 집합 속하는지 구하는 문제이다. 이 때 union-find 알고리즘을 사용하게되면, 정말 적절히 문제해결이 가능하다.```

## 기본 조건
* 앞에 0이 입력되면, union-find을 진행한다.
* 앞에 1이 진행되면, sameNode함수로 같은 집합인지 판별한다.

<hr>

## 유니온 파인드
* init (초기의 parent노드를 자기 자신으로 한다.)
  ```C++
    for (int i = 1; i <= n; i++)
    parent[i] = i;
    ```
* _union (집합을 만드는 함수)
  ```C++
    void _union(int x, int y)
    {
        x = _find(x);
        y = _find(y);
        if (x != y) 
            parent[y] = x;
            /* x와 y가 다르면 y의 부모를 x로 하기로함.
             parent[x] = y;로 적어도됨 묶어주는 용도임
             그 이상의 이유는 없은 누가 부모노드가 될지는
             사용자의 자유*/
    }
  ```
* find( *parent[i]* 가 초기 상태가 아니면, 자신의 부모를 찾아서 return)
    ```C++
    int _find(int x)
    {
        if (parent[x] == x)  return x;
        return parent[x] = _find(parent[x]);
    }
    ```
* sameNode (union과 같은 매커니즘, 같은 집합에 속하는지 판별)
    ```C++
    bool sameNode(int x, int y)
    {
        x = _find(x);
        y = _find(y);
        if (x == y) return true;
        return false;
    }
    ```

<hr>

## 소감 및 기타

```union-find파트는 내가 설명을 적을 것이 거의없다. 외냐면, union과 find가 처음이자 끝이기 때문이다. 접근 형태에 대해서만 설명하면 될 것같다. 같은 집합인지 판별하면 끝이다.```