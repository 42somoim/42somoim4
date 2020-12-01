#include <iostream>
#include <algorithm>
//지금 데이터값 까지의 연속합이 현재의 데이터요소값 하나 보다 작아지면 이전합의 값은쓸모가없어짐
//그래서 이전까지의 합을 지금의 데이터값으로 바꿔주고 다시진행
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt];
	int sum = 0;
	int out = -1001;
	for(int i = 0; i < cnt; i++)
	{
		cin >> data[i];
		sum += data[i];
		if (data[i] > sum)
		{
			sum = data[i];
		}
		out = max(out, sum);
	}
	cout << out;
}
