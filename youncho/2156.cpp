#include <iostream>
#include <algorithm>
using namespace std;
int n, m, d[10001], dp[10001];
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> d[i];
	dp[1] = d[1];
	dp[2] = d[1] + d[2];
	for(int i = 3; i <= n; i++)
		dp[i] = max(max(d[i - 1] + dp[i - 3] + d[i], dp[i - 1]), dp[i - 2] + d[i]);
	cout << dp[n];
}
