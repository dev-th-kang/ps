#include <iostream>
using namespace std;
int dp[10001]= {-1,};
int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
}

int main(){
    int n;
    cin >>n;
    dp[0] = 0;
    dp[1] = 1;
    cout << fibo(n);
}