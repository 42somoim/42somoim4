#include <iostream>

double factorial(int a, int big, int small)
{
	if (small == 0)
		small = 1;
	if (a == big)
		return (1);
	else if (a == 0)
		return (1);
	else
		return ((a * factorial(a-1, big, small-1) / small));
}

int main()
{
	int a;
	std::cin >> a;
	int all_pic;
	int small_pic;
	int modul;
	int big;
	int small;
	double process;
	double all = 0;
	modul = a/2;
	for(int i = 0; i <= modul; i++)
	{
		small_pic = a - i * 2;
		all_pic = small_pic + i;
		if (i > small_pic)
		{
			big = i;
			small = small_pic;
		}
		else
		{
			big = small_pic;
			small = i;
		}
		process = factorial(all_pic, big, small);
		all += process;
	}
	std::cout << (int)all%10007;
}
