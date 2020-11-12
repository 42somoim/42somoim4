#include <iostream>

int main()
{
	int cnt;
	std::cin >> cnt;
	int input;
	int a[11];
	a[0] = 1;
	a[1] = 2;
	a[2] = 4;
	for(int i = 3; i < 11; i++)
	{
		a[i] = a[i-1]+a[i-2]+a[i-3];
	}
	for(int i = 0; i < cnt; i++)
	{
		input = 0;
		std::cin >> input;
		std::cout << a[input - 1] << std::endl;
	}
}
