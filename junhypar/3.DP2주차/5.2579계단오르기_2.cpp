#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[301];
	int sum[301];
	int out;
	for(int i = 0; i < cnt; i++)
		cin >> data[i];
	sum[0] = data[0];
	sum[1] = data[0] + data[1];
	sum[2] = max(data[0] + data[2], data[1] + data[2]);
	for(int i = 3; i < cnt; i++)
		sum[i] = max(sum[i-3] + data[i-1] + data[i], sum[i-2] + data[i]);
	out = sum[cnt-1];
	cout << out;
}
