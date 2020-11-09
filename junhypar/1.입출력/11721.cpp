#include <iostream>
int main()
{
	std::string a;
	getline(std::cin, a);
	int i = 0;
	int ct = 0;
	while(a[i])
	{
		std::cout << a[i];
		i++;
		ct++;
		if (ct == 10)
		{
			std::cout<<	std::endl;
			ct = 0;
		}
	}
}
