# Linear Queue
![linearQueue](https://user-images.githubusercontent.com/104962364/190085425-597808a2-9060-4b15-b9f5-8e2a3c58df53.png)

> 위의 사진은 선형 큐의 사진이다.

* 클래스 구성 - [linearQueue.h](linearQueue.h)
    ```c++
    class queue {
    private:
        int* n;
        int  f,r;
        int  queueSize;
    public:
        queue();
        queue(int x);
        ~queue();
        bool push(int x);
        int pop();
        bool empty();
        int size();
        int front();
        int rear();
    };
    ```
* 클래스 구현
  * [lineQueue.cpp](linearQueue.cpp)
  
* Main
  * [main.cpp](main.cpp)