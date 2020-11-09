#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int cnt[a+1] = {0};
	for(int i = 2; i <= a;i++)
	{
		cnt[i] = cnt[i - 1] + 1;
		if (i%2 == 0)
		{
			if( cnt[i] > cnt[i/2] + 1)
				cnt[i] = cnt[i/2]+1;
		}
		if (i%3 == 0)
		{
			if(cnt[i] > cnt[i/3]+1)
				cnt[i] = cnt[i/3]+1;
		}
	}
	std::cout << cnt[a];
}
