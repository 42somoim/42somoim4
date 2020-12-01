#include <iostream>
using namespace std;
//data[][0] = data값
//data[][1] = 본인기준 왼쪽편 증가수열 최대 길이
//data[][2] = 본인기준 오른쪽편 감소수열 최대 길이
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt][3];
	int out;
	for(int i = 0; i < cnt; i++)
	{
		cin >> data[i][0];
		data[i][1] = 1;
		data[i][2] = 1;
	}
	for(int i = 0; i < cnt; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(data[i][0] > data[j][0] && data[j][1] >= data[i][1])
				data[i][1] = data[j][1] + 1;
		}
	}
	for(int i = cnt - 1; i >= 0; i--)
	{
		for(int j = cnt - 1; j > i; j--)
		{
			if(data[i][0] > data[j][0] && data[j][2] >= data[i][2])
				data[i][2] = data[j][2] + 1;
		}
	}
	out = -1;
	for(int i = 0; i < cnt; i++)
	{
		if (out < data[i][1] + data[i][2] - 1)
			out = data[i][1] + data[i][2] - 1;
	}
	cout << out;
}
