#include <iostream>

int main()
{
	int b,c;
	while(1)
	{
		std::cin >> b >> c;
		if (b == 0 && c== 0)
			break;
		std::cout << b + c << std::endl;
	}
}
