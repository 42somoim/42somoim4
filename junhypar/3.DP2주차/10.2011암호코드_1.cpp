#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string data;
	int size;
	getline(cin,data);
	size = data.size();
	long long fibo[size + 1];
	int cnt[size + 1];
	int ccnt = 0;
	long long out = 99;
	fibo[0] = 1;
	fibo[1] = 1;
	cnt[0] = 1;
	//0하나만들어올때 
	if(size == 1 && data[0] == '0')
	{
		cout << '0';
		exit(0);
	}
	for(int i = 2;i <= size; i++)
		fibo[i] = (fibo[i-1] + fibo[i-2])%1000000;
	for(int i = 1; i<size;i++)
	{
		//에러모음
			//숫자가아닐때 
		if (!(data[i] >= '0' && data[i] <= '9'))
		{
			out = -1;
			break;
		}
		if (!(data[i - 1] >= '0' && data[i - 1] <= '9'))
		{
			out = -1;
			break;
		}
			//00 같은놈들이왔을때 
		if (data[i] == '0' && data[i-1] == '0')
		{
			out = -1;
			break;
		}
			//30 40 50 ~ 90이 왔을때
		if (data[i] == '0' && (data[i-1] >= '3'))
		{
			out = -1;
			break;
		}
			//맨첫수가 0일때
		if (data[0] == '0')
		{
			out = -1;
			break;
		}
		//여기부터 입력된 숫자열 판별
		if (data[i-1] <= '1' && (data[i] > '0' && data[i] <= '9') ||
				(data[i-1] == '2' && (data[i] > '0' && data[i] <= '6') ))
		{
			cnt[ccnt]++;
		}
		else if(data[i] == '0')
		{
			cnt[ccnt]--;
			ccnt++;
			cnt[ccnt] = 0;
		}
		else
		{
			ccnt++;
			cnt[ccnt] = 1;
		}
	}
	if (out == -1)
		cout << '0';
	else
	{
		out = 1;
		for(int i = 0; i<= ccnt; i++)
		{
			out = ((fibo[cnt[i]])*out)%1000000;
		}
		cout << out;
	}
}
