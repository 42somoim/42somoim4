#include <iostream>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	long long data[101];
	data[0] = 0;
	data[1] = 1;
	data[2] = 1;
	data[3] = 1;
	data[4] = 2;
	data[5] = 2;
	for(int i = 6; i <= 100; i++)
		data[i] = data[i-1] + data[i-5];
	for(int i = 0, j = 0; i < cnt; i++)
	{
		cin >> j;
		cout << data[j] <<"\n";
	}
}
