#include <iostream>

int main()
{
	int cnt;
	std::cin >> cnt;
	int out[cnt][10] = {};
	int output=0;
	for(int i = 0; i < 10; i++)
		out[0][i] = 1;
	for(int i = 1; i < cnt; i++)
	{
		for(int k = 0; k < 10; k++)
		{
			out[i][k] = out[i-1][k];
			for(int j = k+1; j < 10; j++)
			{
				out[i][k] = (out[i][k] + out[i-1][j])%10007;
			}
		}
	}
	for(int i = 0;i < 10;i++)
		output = (output + out[cnt-1][i])%10007;
	std::cout<<output;
}
