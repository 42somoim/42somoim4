#include <iostream>
#include <queue>
using namespace std;
int n, m, arr[1002][1002], vs[1002], u, v, tmp, ans;
queue<int> q;
void bfs(int s) {
	q.push(s);
	while(!q.empty()) {
		s = q.front(); q.pop();
		for(int i = 1; i <= n; i++) {
			if(!arr[s][i] || vs[i]) continue;
			q.push(i);
			vs[i] = 1;
		}
	}
}
int main() {
	cin >> n >> m;
	while(m--) {
		cin >> u >> v;
		arr[u][v] = arr[v][u] = 1;
	}
	for(int i = 1; i <= n; i++)
		if(!vs[i]) {
			bfs(i);
			ans++;
		}
	cout << ans;
}
