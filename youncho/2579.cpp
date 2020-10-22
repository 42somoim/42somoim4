#include <iostream>
#include <algorithm>
using namespace std;
int n, m, dp[100001] = {-1001, };
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> m;
		dp[i] = max(dp[i - 1] + m, m);
	}
	sort(dp, dp + n + 1);
	cout << dp[n];
}
