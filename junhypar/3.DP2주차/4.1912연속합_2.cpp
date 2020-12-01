#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	int data[cnt];
	int sdata[cnt] = {0};
	int flag = 1;
	int cnt2 = -1;
	int out = -1001;
	int i;
	for(i = 0; i < cnt; i++)
	{
		cin >>data[i];
		if (cnt2 == -1)
		{
			cnt2 = 0;
			if (data[0] < 0)
				flag *= -1;
		}
		if (data[i] >= 0 && flag > 0)
		{
			sdata[cnt2] += data[i];
		}
		else if (data[i] < 0 && flag < 0)
		{
			sdata[cnt2] += data[i];
		}
		else
		{
			flag *= -1;
			cnt2++;
			sdata[cnt2] = data[i];
		}
		out = max(out, data[i]);
		out = max(out, sdata[cnt2]);
	}

	while(cnt != cnt2 && cnt2 != 0)
	{
		flag = 0;
		cnt = cnt2;
		cnt2 = 0;
		for (i = -1; i <= cnt; i+=2)
		{
			if (i == -1)
			{
				i = 0;
				if (sdata[i] < 0)
				{
					i++;
					cnt2++;
				}
			}
			if (sdata[i] + sdata[i+1] > 0)
			{
				flag += sdata[i] + sdata[i+1];
				out = max(out, flag + sdata[i+2]);
			}
			else if(flag != 0)
			{
				sdata[cnt2] = flag;
				sdata[cnt2+1] = sdata[i+1];
				cnt2+=2;
				flag = 0;
			}
			else
			{
				sdata[cnt2] = sdata[i] + sdata[i+1];
				cnt2++;
			}
		}
	}
	cout << out;
}
