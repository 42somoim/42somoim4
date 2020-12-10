#include <iostream>
#include <algorithm>
//주어진카드팩단위를 다 저장하고
//한장살때 최대값 2장살때 최디값... n장살때 최대값을 계속찾음
//예를 들어 4장을살때는 4장들이팩가격 or 3장살때 최대값 +1장최대값 or 2장살때최대값 + 2장살때 최디값
//으로 표현할수있으므로 2중 for 문을이용해서 그를 구현
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt + 1];
	int out[cnt+1];
	data[0] = 0;
	for(int i = 1;i <= cnt; i++)
		cin >>data[i];
	out[0] = data[0];
	out[1] = data[1];
	for(int i = 2;i<=cnt;i++)
	{
		out[i] = data[i];
		for(int j = 1; j <= i/2; j++)
		{
			out[i] = max(out[i],out[j]+out[i-j]);
		}
	}
	cout << out[cnt];
}
