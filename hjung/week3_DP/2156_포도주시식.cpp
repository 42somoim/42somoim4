#include <iostream>
#include <algorithm>

using namespace std;

int	arr[100001];
int	dp[100001];

int main()
{
	int n;

	cin >> n;

	//get_input
	for (int i = 1; i < n + 1; i++)
	{
		cin >> arr[i];
	}

	//set_initial_value
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	//solve
	for(int i = 3; i < n + 1; i++)
	{
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], max(dp[i - 2] + arr[i], dp[i - 1]));
	}
	cout << dp[n] << '\n';
	return (0);
}