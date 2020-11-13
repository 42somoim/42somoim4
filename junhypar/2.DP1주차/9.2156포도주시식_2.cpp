#include <iostream>
using namespace std;
//o1 = ox
//o2 = xo
//o3 = oo
//o4 = xx
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt];
	int out[4];
	int o[4];
	int o1, o2, o3, o4;
	int cnt_2 = cnt / 2;
	int flag;
	int flag2;
	int flag3;
	out[0] = 0;
	out[1] = 0;
	out[2] = 0;
	out[3] = 0;
	for(int j = 0; j < cnt; j ++)
	{
		cin >> data[j];
	}
	for (int i = 0; i < cnt_2; i++)
	{
		flag = 0;
		flag2 = 0;
		flag3 = 0;
		o1 = data[i*2 + 1];
		o2 = data[i*2];
		o3 = data[i*2] + data[i*2+1];
		o4 = 0;
		if(i == 0)
		{
			out[0] = o1;
			out[1] = o2;
			out[2] = o3;
			out[3] = o4;
		}
		else
		{
			flag = (out[1] > out[3] ? out[1]:out[3]);
			flag2 = (flag > out[0] ? flag:out[0]);
			flag3 = (flag2 > out[2] ? flag2:out[2]);
			o[0] = flag3 + o1;
			o[1] = flag2 + o2;
			o[2] = flag + o3;
			o[3] = flag3;
			out[0] = o[0];
			out[1] = o[1];
			out[2] = o[2];
			out[3] = o[3];
		}
	}
	if (cnt % 2)
	{
		out[0] += data[cnt - 1];
		out[1] += data[cnt - 1];
		out[3] += data[cnt - 1];
	}
	flag = (out[1] > out[0] ? out[1]:out[0]);
	flag2 = (flag > out[2] ? flag:out[2]);
	cout << (flag2 > out[3] ? flag2:out[3]);
}
