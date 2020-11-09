#include <iostream>

int main()
{
	int a,b,c;
	int ct = 0;
	std::cin >> a;
	while(a)
	{
		std::cin >> b >> c;
		ct++;
		std::cout <<"Case #"<<ct<<": "<<b<<" + "<<c<<" = "<< b + c << std::endl;
		a--;
	}
}
