#include <iostream>

int main()
{
	int a,b,c;

	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	std::cin >> a;
	while(a)
	{
		std::cin >> b >> c;
		std::cout << b + c << std::endl;
		a--;
	}
}
