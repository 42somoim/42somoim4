#include <iostream>

using namespace std;

int dp[1001];

int main()
{
    int n;

    cin >> n;
    dp[0]=1;
    dp[1]=1;
    for (int i=2; i<=n;i++)
        dp[i] = (dp[i-1] + dp[i-2]) % 10007; //계속 나눠주면서 하지 않으면 에러 남.
    cout << dp[n];
}