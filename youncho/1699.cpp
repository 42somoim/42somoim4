#include <iostream>
#include <algorithm>
using namespace std;
int n, dp[100001];
int main() {
	cin >> n;
	for(int i = 0; i <= n; i++)
		dp[i] = i;
	for(int i = 2; i <= n; i++)
		for(int j = 2; j * j <= i; j++)
			dp[i] = min(dp[i - j * j] + 1, dp[i]);
	cout << dp[n];
}
