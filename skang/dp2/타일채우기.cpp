#include <iostream>

using namespace std;

int main()
{
    int n;
    int dp[31]={};

    cin >> n;
    /* 존재하지않는 벽을 채우는 경우의 수 
        = "타일을 하나도 사용하지 않는다." 1개(어이없)*/
    dp[0]=1; 
    dp[2]=3;
    if (n % 2 == 1)
        dp[n] = 0;
    else
    {
        for (int i=4;i<=n;i+=2)
        {
            dp[i]= dp[i-2]*3;
            for (int j=4;j<=i;j+=2)
                dp[i] += dp[i-j]*2; //새로운 모양이 2가지 생김(*2는 뒤집었을 경우)
        }
    }
    cout << dp[n] << endl;
}