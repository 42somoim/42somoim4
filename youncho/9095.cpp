#include <iostream>
using namespace std;
int d[11] = {0, 1, 2, 4};
int dp(int n)
{
	if(d[n]) return d[n];
	return d[n] = dp(n-1) + dp(n-2) + dp(n-3);
}
int main()
{
	int t, n; 
	cin >> t;
	dp(10);
	for(int i = 0; i < t; i++)
	{
		cin >> n;
		cout << d[n] << endl;;
	}
}
