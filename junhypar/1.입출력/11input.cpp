#include <iostream>
int main()
{
	std::string a;
	while(1)
	{
		getline(std::cin, a);
		if (a == "")
			break;
		std::cout << a << std::endl;
	}
}
