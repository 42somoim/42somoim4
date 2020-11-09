#include <iostream>

int pivo(int a)
{
	if (a==1)
		return(1);
	else if (a==2)
		return(2);
	else
		return((pivo(a-1)+pivo(a-2))%10007);
	
}

int main()
{
	int a;
	std::cin >> a;
	std::cout << pivo(a);
}
