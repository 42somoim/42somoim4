#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int data;
	cin >> data;
	int a[data];
	a[0] = 0;
	a[1] = 3;
	a[2] = 0;
	a[3] = 11;
	for(int i = 4; i < data; i++)
	{
		if (i%2 == 0)
			a[i] = 0;
		else
		{
			a[i] = 3*a[i-2] + 2;
			for(int j = i-4; j>- 0; j-=2)
				a[i] += a[j] * 2;
		}
	}

	cout <<a[data-1];
}
