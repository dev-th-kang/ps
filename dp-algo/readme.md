# DP
    > DP는 동적 계획 법으로 불리며, 큰 문제를 작은 문제로 쪼개서 문제를 해결하는 형태이다.

이부분은 백준의 문제를 풀면서 형태를 익히는 방법이 가장 좋다. DP 는 많이 경험할수록 좀 더 쉽게 풀 수 있다.

* 피보나치
  * [top-down](top-down/fibo.cpp)
    ```c++
    int fibo(int n){
        if(n==0) return 0;
        else if(n==1) return 1;
        else dp[n] = fibo(n-1) + fibo(n-2);
        return dp[n];
    }
    ```
    > 재귀를 이용해서, 위에서 아래로 내려오는 방식이다.
  * [bottom-up](bottom-up/fibo.cpp)
    ```c++
    int fibo(int n){
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
    ```
     > for문을 이용해서, 기존값을 사용해서 다음값을 계산해나가는 방식이다.

    ### 두 방식전체가 메모이제이션을 사용하여 기존의 데이터를 저장해서 그 데이터를 필요할 때 참조해서 사용하여, 속도를 일반적인 방법보다 빠르게 만든다. ###