#include <iostream>

using namespace std;

int dp[1001];
int dp2[1000];

int main()
{
    int n;

    cin >> n;
    dp[0]=1;
    dp[1]=1;
    for (int i=2; i<=n;i++)
        dp[i] = (dp[i-1] + dp[i-2]*2) % 10007; //곱하기 2를 하는 이유=2x2사각형을 쓰면 n-2일 때 경우가 대칭으로 두번 나타남.
    cout << dp[n];
}