#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, arr[27][27];
vector<int> ans;
int dfs(int x, int y) {
	if(!arr[y][x]) return 0;
	arr[y][x] = 0;
	return dfs(x - 1, y) + dfs(x + 1, y) + dfs(x, y -1) + dfs(x, y + 1) + 1;
}
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			scanf("%1d", &arr[i][j]);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(arr[i][j]) ans.push_back(dfs(j, i));
	cout << ans.size() << endl;
	sort(ans.begin(), ans.end());
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << endl;
}
