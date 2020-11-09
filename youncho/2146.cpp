#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int n, arr[102][102], xx, yy, cx, cy, cc, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1}, v[102][102], vv[102][102], tmp[102][102], ans = 1e9; 
queue<int> qx, qy, qc;
void dfs(int x, int y) {
	for(int i = 0; i < 4; i++) {
		xx = x + dx[i]; yy = y + dy[i];
		if(xx > n || yy > n || xx < 1 || yy < 1 || !arr[yy][xx] || v[yy][xx]) continue;
		v[yy][xx] = 1; tmp[yy][xx] = 1;
		qx.push(xx), qy.push(yy), qc.push(0);
		dfs(xx, yy);
	}
}
int main() {
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> arr[i][j];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++) {
			if(arr[i][j] == 1 && !v[i][j]) {
				v[i][j] = 1; tmp[i][j] = 1;
				qx.push(j), qy.push(i), qc.push(0);
				dfs(j, i);
				while(!qx.empty()) {
					cx = qx.front(); qx.pop();
					cy = qy.front(); qy.pop();
					cc = qc.front(); qc.pop();
					for(int k = 0; k < 4; k++) {
						xx = cx + dx[k]; yy = cy + dy[k];
						if(xx > n || yy > n || xx < 1 || yy < 1) continue;
						if(arr[yy][xx] && !tmp[yy][xx]) {
							ans = cc < ans ? cc : ans;
							break;
						} 
						if(arr[yy][xx] || vv[yy][xx]) continue;
						vv[yy][xx] = 1;
						qx.push(xx), qy.push(yy), qc.push(cc + 1);
					}
				}
				while(!qx.empty()) qx.pop(), qy.pop(), qc.pop();
				memset(tmp, 0, sizeof(tmp));
				memset(vv, 0, sizeof(vv));
			}
		}
	cout << ans;
}
