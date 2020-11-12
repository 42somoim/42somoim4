#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int arr[100000]={};
    int dp[100000]={};
    int res;

    cin >> n;
    for (int i=0;i<n;i++)
        cin >> arr[i];
    dp[0] = arr[0];
    res = arr[0];
    for (int i=1;i<n;i++)
    {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
        res = max(dp[i], res);
    }
    cout << res;
    return (0);
}