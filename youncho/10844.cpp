#include <iostream>
using namespace std;
const long long mod = 1e9;
int n, dp[101][11];
long long ans;
int main() {
	for(int i = 1; i < 10; i++)
		dp[1][i] = 1;
	cin >> n;
	for(int i = 2; i <= n; i++)
		for(int j = 0; j < 10; j++)
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
	for(int i = 0; i < 10; i++) {
		ans += dp[n][i];
		ans %= mod;
	}
	cout << ans;
}
