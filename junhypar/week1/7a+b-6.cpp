#include <iostream>

int main()
{
	int a,b,c;
	char d;
	std::cin >> a;
	while(a)
	{
		std::cin >> b >>d>> c;
		std::cout << b + c << std::endl;
		a--;
	}
}
