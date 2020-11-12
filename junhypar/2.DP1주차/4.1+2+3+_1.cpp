#include <iostream>

int factorial(int a)
{
	if (a == 0)
		return (1);
	else if (a == 1)
		return (1);
	else
		return (a * factorial(a-1));
}
int main()
{
	int cnt;
	std::cin >> cnt;
	int input;
	int out;
	int c1,c2,c3;
	int end_flag;
	for(int i = 0; i < cnt; i++)
	{
		input = 0;
		std::cin >> input;
		c1 = input - 2;
		c2 = 1;
		c3 = 0;
		out = 1;
		end_flag = input / 3;
		while (1)
		{
			if (c1 > 1 && (c1 + c2 + c3) > 1)
			{
				out += factorial(c1 + c2 + c3) / (factorial(c1) * factorial(c2) * factorial(c3));
				c1 -= 2;
				c2++;
			}
			else if (c1 <= 1 && c3 != end_flag && (c1 + c2 + c3) > 1)
			{
				out += factorial(c1 + c2 + c3) / (factorial(c1) * factorial(c2) * factorial(c3));
				c1 = input - (3 * c3) - 3;
				c2 = 0;
				c3++;
			}
			else
			{	
				if(c1 + c2 + c3 > 1)
					out += factorial(c1 + c2 + c3) / (factorial(c1) * factorial(c2) * factorial(c3));
				break;
			}
		}
		std::cout << out << std::endl;
	}
}
