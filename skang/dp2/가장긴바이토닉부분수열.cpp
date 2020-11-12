#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[1001] = {};
    int dp[1001]={};
    int r_dp[1001]={};
    int res = 0;

    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> arr[i];
    
    for (int i=1; i<=n;i++)
    {
        dp[i] = 1;
        for (int j=1;j<=i;j++)
        {
            if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
    for (int i=n; i>=1;i--)
    {
        r_dp[i] = 1;
        for (int j=n;j>=i;j--)
            if (arr[j] < arr[i] && r_dp[i] < r_dp[j] + 1)
                r_dp[i] = r_dp[j] + 1;
    }
    for (int i=1;i<=n;i++)
        if (res < dp[i] + r_dp[i] - 1)
            res = dp[i] + r_dp[i] - 1;
    cout << res << endl;
}