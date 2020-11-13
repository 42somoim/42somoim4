#include <iostream>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data;
	int count[cnt][2];
	for(int i = 0;i < cnt; i++)
	{
		cin >> data;
		count[i][0] = data;
		count[i][1] = 1;
		for(int j = 0; j < i; j++)
		{
			if (count[j][0] < data && count[j][1] >= count[i][1])
				count[i][1] = count[j][1] + 1;
		}
	}
	data = count[0][1];
	for(int i = 1;i<cnt;i++)
	{
		if(data < count[i][1])
			data = count[i][1];
	}
	cout<<data;
}
