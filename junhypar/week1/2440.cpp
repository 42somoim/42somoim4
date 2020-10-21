#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	while(a--)
	{
		for(int c = 0; c <= a; c++)
			std::cout << "*";
		std::cout << std::endl;
	}
}
