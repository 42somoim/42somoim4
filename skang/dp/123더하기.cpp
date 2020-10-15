#include <iostream>

using namespace std;

int dp[1000];

int main()
{
    int n;
    int num[11] = {0,};

    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    cin >> n;
    for (int i=0;i<n;i++)
        cin >> num[i];
    for (int j=0;j<n;j++)
    {
        for (int i=3;i<=num[j];i++)
        {
            dp[i]= dp[i-1] + dp[i-2]+dp[i-3];
        }
        cout << dp[num[j]] << "\n";
    }
}