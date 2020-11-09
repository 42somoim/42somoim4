#include <iostream>

int main()
{
	int a,b,c,d,e;
	std::cin >> c >> d;
	a = 20;
	b = 7;
	if (c == 1)
	{
		b = 6;
		c = 13;
	}
	else if (c == 2)
	{
		b = 6;
		c = 14;
	}
	e = (21*a)/4 + (5*b)/4 + ((c + 1)*26)/10 + d - 1;
	e = e % 7;

	printf("%.3s","SUNMONTUEWEDTHUFRISAT"+(e*3)); 
}
