#include <iostream>
int main()
{ 
	int a,d;
	std::cin >> a;
	int b = a;
	while(a--)
	{
		for(int c = 0; c < b; c++)
		{
			if (c >b-( b - a+1) )
				std::cout<< "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	a++;
	while(a++ < b-1)
	{
		for(int c = 0; c < b; c++)
		{
			if (c >b-( b - a+1) )
				std::cout<< "*";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}
