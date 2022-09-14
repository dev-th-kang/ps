#include <iostream>
using namespace std;
int dp[10001]= {-1,};
int fibo(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin >>n;

    cout << fibo(n);
}