#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int dp[100001] = {};

    cin >> n;
    for (int i=1;i<=n;i++)
        dp[i] = i;
    for (int i=2; i<=n;i++)
        for (int j=2; j<=sqrt(i);j++)
        dp[i] = min(dp[i - j*j] + 1, dp[i]);
    cout << dp[n] << endl;
}