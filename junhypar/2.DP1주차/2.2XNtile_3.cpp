#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b[a+1];
	b[1] = 1;
	b[2] = 2;
	for(int i = 3; i <= a; i++)
	{
		b[i] = (b[i-1] + b[i-2])%10007;
	}
	std::cout << b[a];
}
