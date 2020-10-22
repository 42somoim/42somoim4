#include <iostream>
#include <algorithm>
using namespace std;
int n, arr[1001], dp[1001];
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = 1;
		for(int j = i; j != 0; j--)
			if(arr[j] < arr[i]) dp[i] = max(dp[i], dp[j] + 1);
	}
	sort(dp, dp + n + 1);
	cout << dp[n];
}
