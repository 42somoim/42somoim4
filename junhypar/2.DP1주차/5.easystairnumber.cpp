#include <iostream>

int main()
{
	int cnt;
	std::cin >> cnt;
	int out[cnt][10] = {};
	int output=0;
	for(int i = 0; i < 10; i++)
		out[0][i] = 1;
	out[0][0] = 0;
	for(int i = 1; i < cnt; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(j == 0)
				out[i][j] = out[i-1][1];
			else if (j == 9)
				out[i][j] = out[i-1][8];
			else
				out[i][j] = (out[i-1][j-1] + out[i-1][j+1])%1000000000;
		}
	}
	for(int i = 0;i < 10;i++)
		output = (output + out[cnt-1][i])%1000000000;
	std::cout<<output;
}
