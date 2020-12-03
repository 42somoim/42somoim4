#include <iostream>
#include <algorithm>
using namespace std;
//0x o1
//x0 o2
//00 o3
//0x0x sum[0] 0x 로끝남
//00x0 sum[1] x0 로끝남
//0x00 sum[2] 00 로끝남
int main()
{
	int cnt;
	int sum[3];
	cin >> cnt;
	int data[cnt];
	int o1,o2,o3;
	int out;
	int flag[2];
	for(int i = 0; i < cnt; i++)
		cin >> data[i];
	if (cnt < 3)
	{
		out = 0;
		for(int i = 0; i < cnt; i++)
			out += data[i];
	}
	else if (cnt == 3)
	{
		out = data[0] + data[2];
	}
	else
	{
		sum[0] = data[0] + data[2];
		sum[1] = data[0] + data[1] + data[3];
		sum[2] = data[0] + data[2] + data[3];
		if (cnt == 4)
			out = max(sum[1], sum[2]);
		else
		{
			for(int i = 4; i < cnt; i+=2)
			{
				if ((cnt - i) / 2 == 1)
				{
					flag[0] = i;
					flag[1] = (cnt - i) % 2;
					break;
				}
				o1 = max(sum[0] + data[i], sum[1] + data[i]);
				o2 = max(sum[1] + data[i+1], sum[2] + data[i+1]);
				o3 = sum[0] + data[i] + data[i+1];
				sum[0] = o1;
				sum[1] = o2;
				sum[2] = o3;
			}
			if (flag[1] == 0)
			{
				sum[0] += data[flag[0]] + data[flag[0] + 1];
				sum[1] += data[flag[0] + 1];
				sum[2] += data[flag[0] + 1];
			}
			else
			{
				sum[0] += data[flag[0]] + data[flag[0] + 2];
				sum[1] += max(data[flag[0] + 1] + data[flag[0] + 2],data[flag[0]] + data[flag[0] + 2]);
				sum[2] += data[flag[0] + 1] + data[flag[0] + 2];
			}
			out = max(max(sum[0], sum[1]), sum[2]);
		}
	}
	cout << out;
}
