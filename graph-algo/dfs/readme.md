![dfs](https://user-images.githubusercontent.com/104962364/189997368-3cb1b832-2fa0-47da-854d-119d13fdf575.png)

```
DFS 는 광산에서 채굴하는 사람들과 같다. 하나의 굴을 막장이 나오기 전까지 파고, 이 후 다른 굴을 찾아나선다. 그런 것 처럼 깊게 파고, 백트래킹하고 인접한 정점이 남았는지 확인하며, 계속해서 백트래킹을 진행한다. 이러한 형태를 DFS 라고한다.
```


* [directed-dfsSearch.cpp](directed-dfsSearch.cpp) 와 [unDirected-dfsSearch.cpp](unDirected-dfsSearch.cpp) 의 40번째 줄의 내용중 
    ```c++
    for (int i = 0; i < e; i++)sort(mat[i].begin(), mat[i].end());
    ```

    위 코드는 vector공간에 정보를 넣게 되어서, 인접한 vertax의 정보가 vertax순서대로 담기지않아서 더 오래 걸리는 경우가 생긴다. 그러므로, 각 vector공간을 정렬해줌으로써, 좀 더 빠르게 탐색할 수 있도록 도와준다. 2차원 배열을 만들어서 하게될 경우 2차원배열을 idx순서로 참조하면 되므로 그땐 이런 형태를 사용하지않아도 된다. BFS의 특성상 순서대로 탐색한다는 전게가 있기 때문에 필요하다 