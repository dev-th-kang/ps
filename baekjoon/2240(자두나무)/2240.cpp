#include <iostream>
#define max(a, b) (a > b ? a : b);
using namespace std;

// 1번 나무, 2번 나무
int tree[1001];
//T, W, Tree
int dp[1001][31][3];

int main()
{
    int T, W;
    cin >> T >> W;
    for (int i = 1; i <= T; i++) cin >> tree[i];

    for (int i = 1; i <=T;i++){
        for(int j=0; j<=W;j++){
            if(j==0) dp[i][j][1] = dp[i-1][j][1] + (tree[i] == 1);
            else{
                //TODO: 주요 점화식파트
                dp[i][j][1] = max(dp[i-1][j-1][2] + (tree[i] ==1), dp[i-1][j][1] + (tree[i] ==1));
                dp[i][j][2] = max(dp[i-1][j-1][1] + (tree[i] ==2), dp[i-1][j][2] + (tree[i] ==2));
            }
        }
    }
    int ans = -1;
    for(int i=0;i<=W;i++){
        ans = max(dp[T][i][1],dp[T][i][2]);
    }
    cout << ans;
}