#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int cnt;
	cin >> cnt;
	// int data[cnt][2]의 배열로 선언한것과 같은 벡터선언, 0으로초기화해줌)
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>> data(cnt, vector<int>(2,0));
	for(int i = 0; i<cnt; i++)
	{
		cin >> data[i][0] >> data[i][1];
	}
	sort(data.begin(),data.end());
	for(int i = 0; i<cnt; i++)
	{
		cout<<data[i][0]<<" "<<data[i][1]<<endl;
	}
}
