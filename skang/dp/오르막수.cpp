#include <iostream>

using namespace std;

//점화식 : dp[i][j]=dp[i-1][0] + ~ + dp[i-1][j-1]

int main()
{
    int n;
    int dp[10000][10]={0};
    int res = 0;

    cin >> n;
    for (int i = 0;i<10;i++)
        dp[1][i]=1;
    for (int j=2;j<=n;j++)
    {
        for (int i = 0; i<10; i++)
        {
            for (int k=0; k <=i; k++)
            {
                dp[j][i] += dp[j-1][k];
            }
            dp[j][i] %= 10007;
        }
    }
    for (int i=0; i<10;i++)
        res = (res + dp[n][i]) %10007;
    cout << res % 10007;
}