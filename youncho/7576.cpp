#include <iostream>
#include <queue>
using namespace std;
int n, m, arr[1002][1002], x, y, cx, cy, dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0}, ans;
queue<int> qx, qy;
int main() {
	cin >> n >> m;
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 1) qx.push(j), qy.push(i);
		}
	while(!qx.empty()) {
		x = qx.front(); qx.pop();
		y = qy.front(); qy.pop();
		for(int i = 0; i < 4; i++) {
			cx = x + dx[i];
			cy = y + dy[i];
			if(cx > n || cy > m || cx < 1 || cy < 1) continue;
			if(arr[cy][cx] == 0) {
				arr[cy][cx] = arr[y][x] + 1;
				qx.push(cx), qy.push(cy);
			}
		}
	}
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++) {
			if(!arr[i][j]) {
				cout << "-1";
				return 0;
			}
			if(ans < arr[i][j]) ans = arr[i][j];
		}
	cout << ans - 1;
}
