# [1167(트리의 지름)](1167.cpp)

```이 문제는 다익스트라를 이용하여, 응용하는 문제이다.```

## 트리지름 구하는 공식

* 임의의 노드하나를 정한다.
* 임의의 노드를 기준으로 다익스트라로 연산을 한다.
  * 다익스트라로 연산된 것중 가중치가 가장 큰 노드 index를 기준으로 잡는다.
* 기준으로 잡은 index에서 다시 다익스트라를 진행하면, 가장 높은 가중치가 트리의 지름이 되게 된다.

[koosaga님의 "트리의지름" 설명참조](https://koosaga.com/14)

<hr>

## 주요 소스구문

```C++
    dijkstra(1);
    int ans = -1;
    int ansIdx = -1;
    for (int i = 1; i <= n;i++) {
        if (ans < costList[i]) {
            ans = costList[i];
            ansIdx = i;
        }
    }
    dijkstra(ansIdx); 
    int ans2=-1;
    for (int i = 1; i <= n; i++) {
        if (ans2 < costList[i]) {
            ans2 = costList[i];
        }
    }
    cout << ans2;
```

* 위 코드가 위에서 설명한 메커니즘의 모든 것이다.


<hr>

## 소감

```트리의지름을 구하는 공식만 알고있으면 어려운 내용이 아니다.```
