#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt];
	int out = 0;
	int sum = 0;
	for(int i = 0; i < cnt; i++)
	{
		cin >>data[i];
		sum += data[i];
		out = max(out, sum);
	}
	for(int i = 1; i<cnt;i++)
	{
		sum = 0;
		for(int j = i; j < cnt;j++)
		{
			sum +=data[j];
			out = max(out, sum);
		}
	}
	cout << out;

}
