#include <iostream>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[3];
	int c1 = 1,c2 = 2,c3 = 0;
	int input;
	for(int j = 0; j < cnt; j ++)
	{
		cin >> input;
		if(j == 0)
		{
			data[0] = 0;
			data[1] = input;
			data[2] = input;
		}
		else
		{
			if ( c1 != 0)
				data[0] += input;
			if ( c2 != 0)
				data[1] += input;
			if ( c3 != 0)
				data[2] += input;
			c1 = (c1+1)%3;
			c2 = (c2+1)%3;
			c3 = (c3+1)%3;
		}
	}
	int out;
	if (data[0] >= data[1] && data[0] >= data[2])
		out = data[0];
	else if (data[1] >= data[0] && data[1] >= data[2])
		out = data[1];
	else
		out = data[2];
	cout << out;
}
