#include <iostream>
using namespace std;
int n, m, arr[101][101], ans[101][101];
void dfs(int x, int y, int cnt) {
	if(!arr[y][x]) return;
	if(x < 1 || y < 1 || x > m || y > n) return;
	if(ans[y][x] <= cnt && ans[y][x]) return;
	ans[y][x] = cnt;
	dfs(x - 1, y, cnt + 1);
	dfs(x + 1, y, cnt + 1);
	dfs(x, y - 1, cnt + 1);
	dfs(x, y + 1, cnt + 1);
}
int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf("%1d", &arr[i][j]);
	dfs(1, 1, 1);
	cout << ans[n][m];
}
