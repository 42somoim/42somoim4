#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int s_data;
	cin >> s_data;
	int p_data = s_data;
	int data[s_data + 1] = {0};
	int a;
	int cnt;
	cnt = 0;
	while(p_data > 3)
	{
		a = (int)sqrt(p_data);
		cnt++;
		p_data -= (a*a);
	}
	cnt += p_data;
	for(int i = 1; i <= 3; i++)
		data[i] = i;
	for(int i = 4; i <= s_data; i++)
	{
		data[i] = data[i - 1] + 1;
		for(int j = 2; j*j <= i; j++)
		{
			if (data[i] > data[i-j*j] + 1)
				data[i] = data[i-j*j] + 1;
		}
	}
	if (cnt > data[s_data])
		cnt = data[s_data];
	cout << cnt;
}
