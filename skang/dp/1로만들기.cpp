#include <iostream>
#include <algorithm>

using namespace std;
int dp[1000001];
int main()
{
    int n;

    dp[1] = 0;
    cin >> n;
    for (int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] +1;
        if (i%2 == 0)
            dp[i] = min(dp[i/2]+1, dp[i]);
        if (i%3 ==0)
            dp[i] = min(dp[i/3] +1, dp[i]);
    }
    cout << dp[n];
}

/* 
시간초과(dp가 뭔지 몰랐음)
    int n;
    int count;

    count = 0;
    scanf("%d", &n);
    while (n!=1)
    {
        if (n%2==0 && (n/2)%2==0)
            n/=2;
        else if ((n-1)%3==0)
        {
            n--;
            n/=3;
            count++;
        }
        else if (n%3==0)
            n/=3;
        else if (n%2==0)
            n/=2;
        count++;
    }
    printf("%d", count);
    */