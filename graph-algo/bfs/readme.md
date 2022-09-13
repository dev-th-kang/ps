![bfs](https://user-images.githubusercontent.com/104962364/189995109-b3e82299-be08-4d46-996f-8c74a712ccd7.png)



```
BFS는 냇물이 퍼지듯이 인접한 vertax로 퍼져서 나아가는 형태이다.
```


* [directed-bfsSearch.cpp](directed-bfsSearch.cpp) 와 [unDirected-bfsSearch.cpp](unDirected-bfsSearch.cpp) 의 40번째 줄의 내용중 
    ```c++
    for (int i = 0; i < e; i++)sort(mat[i].begin(), mat[i].end());
    ```

    위 코드는 vector공간에 정보를 넣게 되어서, 인접한 vertax의 정보가 vertax순서대로 담기지않아서 더 오래 걸리는 경우가 생긴다. 그러므로, 각 vector공간을 정렬해줌으로써, 좀 더 빠르게 탐색할 수 있도록 도와준다. 2차원 배열을 만들어서 하게될 경우 2차원배열을 idx순서로 참조하면 되므로 그땐 이런 형태를 사용하지않아도 된다. BFS의 특성상 순서대로 탐색한다는 전게가 있기 때문에 필요하다