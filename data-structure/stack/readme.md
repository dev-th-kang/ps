![stack](https://user-images.githubusercontent.com/104962364/190085404-2b43d17e-da93-4dd7-a622-8fdb963d3385.png)

> 위의 사진은 배열 스택의 사진이다.

* 클래스 구성 - [stack.h](stack.h)
    ```c++
   class stack {
        private:
            int* n;
            int  topNum;
            int  stackSize;
        public:
            stack();
            stack(int x);
            ~stack();
            bool push(int x);
            int pop();
            bool empty();
            int size();
            int top();
        };
    ```
* 클래스 구현
  * [stack.cpp](stack.cpp)
  
* Main
  * [main.cpp](main.cpp)