#include <iostream>
#include <cmath>
//12 = 2^2 + 2^2 + 2^2 로 표현가능 
using namespace std;
int main()
{
	int data;
	int cnt;
	int a;
	cnt = 0;
	cin >> data;
	while(data > 3)
	{
		a = (int)sqrt(data);
		cnt++;
		data -= (a*a);
	}
	cnt += data;
	cout << cnt;
}
