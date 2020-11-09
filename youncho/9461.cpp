#include <iostream>
using namespace std;
long long n, m, dp[101] = {0, 1, 1, 1, 2, 2};
int main() {
	cin >> n;
	for(int i = 6; i < 101; i++)
		dp[i] = dp[i - 1] + dp[i - 5];
	for(int i = 0; i < n && cin >> m; i++)
		cout << dp[m] << endl;
}
