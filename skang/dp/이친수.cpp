#include <iostream>

using namespace std;

int main()
{
    int n;
    long dp[90]={0}; //int형이라면 범위가 초과되므로 long으로 해야함.

    cin >> n;
    dp[1] = 1;
    for (int i = 2; i <=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n];
}