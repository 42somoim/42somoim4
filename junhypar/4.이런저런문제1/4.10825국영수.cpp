#include <iostream>
#include <vector>
using namespace std;
void	sort_vector(vector <string> name, vector <vector<int>> data, i, j)
{

}

int main()
{
	int cnt;
	cin >> cnt;
	vector <string> name (cnt, "");
	vector <vector<int>> data (cnt, vector<int>(3,0));
	for(int i = 0; i < cnt; i++)
	{
		cin >> name[i] >> data[i][0] >> data[i][1] >> data[i][2];
	}
}
