#include <iostream>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt];
	int out[cnt];
	int flag;
	for(int i = 0; i < cnt; i++)
	{
		cin >> data[i];
		out[i] = data[i];
		if (i > 0)
		{
			for(int j = 0; j < i; j++)
			{
				if (data[j] < data[i])
				{
					if (out[i] < out[j] + data[i])
						out[i] = out[j] + data[i];
				}
			}
		}
	}
	flag = out[0];
	for(int i = 1; i < cnt; i ++)
	{
		if (out[i] > flag)
			flag = out[i];
	}
	cout << flag;
}
