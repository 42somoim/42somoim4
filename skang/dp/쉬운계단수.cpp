#include <iostream>

using namespace std;

long long dp[101][11]; //첫번째 배열=길이, 두번째배열=끝자리 숫자

int main()
{
    int length;
    long long res; //type 유의하기

    res=0;
    dp[1][0]=0;
    for (int i=1;i<10;i++)
        dp[1][i]= 1;
    cin >> length;
    for (int i=2;i<=length;i++)
    {
        for (int j=0;j<10;j++)
        {
            if (j==0)
                dp[i][j]= dp[i-1][j+1] % 1000000000;
            else if (j==9)
                dp[i][j]= dp[i-1][j-1]%1000000000;
            else
                dp[i][j]= (dp[i-1][j-1] + dp[i-1][j+1])%1000000000;
        }  
    }
    for (int i=0;i<10;i++)
        res += dp[length][i];
    cout << res % 1000000000;
}