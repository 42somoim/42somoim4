#include <iostream>
int main()
{ 
	int a,d;
	std::cin >> a;
	int b = a;
	d = 0;
	while(a--)
	{
		for(int c = 0; c < b + d; c++)
		{
			if (c > a - 1)
				std::cout<< "*";
			else
				std::cout << " ";
		}
		d++;
		std::cout << std::endl;
	}
}
