#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	for(int b = a;b > 0;b--)
	{
		for(int c = 0; c < a + (a-b);c++)
		{
			if (b == 1)
				std::cout << "*";
			else if (c - b + 1 ==0 || c == (2*a-b-1)) 
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}
