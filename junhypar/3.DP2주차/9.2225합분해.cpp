#include <iostream>
using namespace std;
int main()
{
	int num;
	int cnt;
	cin >> num >> cnt;
	long long data[num + 1];
	data[0] = 1;
	for(int i = 1; i <= cnt; i++)
	{
		for(int j = 1; j <= num; j++)
		{
			if(i == 1)
				data[j] = 1;
			else
				data[j] += (data[j-1]%1000000000);
			data[j] = data[j]%1000000000;
		}
	}
	cout << data[num];
}
