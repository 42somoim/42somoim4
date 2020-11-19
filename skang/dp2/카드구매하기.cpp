#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int p[1001]={};
    long long dp[1001]={};

    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> p[i];
    dp[1]=p[1];
    for (int i=2;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
            dp[i]= max(dp[i], dp[i-j]+p[j]);
    }
    cout << dp[n] << endl;
}