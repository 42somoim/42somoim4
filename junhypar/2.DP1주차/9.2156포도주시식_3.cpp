#include <iostream>
using namespace std;
int m(int a, int b)
{
	return(a>b?a:b);
}
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt];
	int out[4] = {0};
	int o[4];
	int o1, o2;
	for(int j = 0; j < cnt; j ++)
		cin >> data[j];
	for (int i = 0; i < cnt/2; i++)
	{
		o1 = data[i*2 + 1];
		o2 = data[i*2];
		o[2] = m(out[1],out[3]);
		o[3] = m(o[2],out[0]);
		o[0] = m(o[3],out[2]) + o1;
		o[1] = o[3] + o2;
		o[2] += (o1 + o2);
		o[3] = m(o[3],out[2]);
		for(o1 = 0;o1<4;o1++)
			out[o1] = o[o1];
	}
	if (cnt % 2)
	{
		o1 = data[cnt - 1];
		out[0] += o1;
		out[1] += o1;
		out[3] += o1;
	}
	cout << m((m(m(out[1],out[0]),out[2])),out[3]);
}
