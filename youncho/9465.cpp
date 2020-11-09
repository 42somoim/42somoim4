#include <iostream>
using namespace std;
int t, n, dp[2][100001];
int main() {
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < 2; i++)
			for(int j = 1; j <= n; j++)
				cin >> dp[i][j];
		for(int i = 2; i <= n; i++) {
			dp[0][i] += max(dp[1][i - 1], dp[1][i - 2]);
			dp[1][i] += max(dp[0][i - 1], dp[0][i - 2]);
		}
		cout << max(dp[0][n], max(dp[0][n - 1], max(dp[1][n], dp[1][n - 1]))) << endl;
	}
}
