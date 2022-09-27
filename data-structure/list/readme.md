# linked-list ( 단일 연결 리스트 )

* [*show class 선언부*](./linked-list.h)

* [*show class 구현부*](./linked-list.cpp)

* [*show main source*](./main.cpp)

#
* ### single linked list 구조
    ![single-linked-list](https://user-images.githubusercontent.com/104962364/192594235-a009405f-75ce-4a62-b9f1-32d41ebbcc22.PNG)

    * 장점<br>
        ```데이터의 추가 제거 조회 등에 유리하다. 또한 데이터를 미리 잡아두는 형태가 아니라, 노드의 주소를 간접 참조 하는 형태이기 때문에, 가변적인 공간을 갖는다는 측면에서 배열보다, 효율적이다.  ```
    * 단점<br>
        ```일반적인 배열보다 구현이 어렵다. 사용에 따라 커스텀마이징해서 좀 더 편리하게 할 수 있지만, 사용자에 목적에 따라 변경하기위해선 일반적으로 배열을 사용하는 것보다 구현난이도가 훨씬높다.```
