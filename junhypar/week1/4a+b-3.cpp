#include <iostream>

int main()
{
	int a,b,c;
	std::cin >> a;
	while(a)
	{
		std::cin >> b >> c;
		std::cout << b + c << std::endl;
		a--;
	}
}
