/** Failed Code **/
#include <iostream>
#include <vector>

using namespace std;

void	find_ans(int n, vector<int> &dp)
{
		if (n % 2)
			dp[n] = ((dp[n - 1] - 2) * 2 + 2) % 1000000000;
		else
			dp[n] = ((dp[n - 1] - 1) * 2 + 1) % 1000000000;
}

int main()
{
		int	N;
		cin >> N;

		vector<int> dp(N);

		dp[1] = 9;
		for(int i = 2; i <= N; i++)
		{
				find_ans(i, dp);
		}
		cout << dp[N] << '\n';
		return (0);
}