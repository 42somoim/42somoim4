#include <iostream>
int main()
{
	int a;
	std::cin >> a;
	for(int b = a;b > 0;b--)
	{
		for(int c = 0; c < a + (a-b);c++)
		{
			if (c - b + 1 >=0)
			{
				if ((c-b+1)%2 == 0)
					std::cout << "*";
				else
					std::cout << " ";
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}
