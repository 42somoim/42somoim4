#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	long long out[a+1][2];
	out[0][0] = 0;
	out[0][1] = 1;
	long long output;
	for(int i = 1; i < a; i ++)
	{
		out[i][0] = out[i-1][0] + out[i-1][1];
		out[i][1] = out[i-1][0];
	}
	output = out[a-1][0] + out[a-1][1];
	std::cout<<output<<std::endl;
}
