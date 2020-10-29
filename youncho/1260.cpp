#include <iostream>
#include <queue>
using namespace std;

int n, m;
int ans[1001][1001];
int v[1001];
queue<int> q;

void dfs (int s) {
	cout << s << " ";
	v[s] = 1;
	for (int i = 1; i <= n; i++) {
		if (v[i] == 1 || ans[s][i] == 0) continue;
		dfs(i);
	}
}

void bfs (int s) {
	q.push(s);
	v[s] = 0;
	
	while (!q.empty()) {
		s = q.front();
		cout << s << " ";
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (ans[s][i] == 0 || v[i] == 0) continue;
			q.push(i);
			v[i] = 0;
		}
	}
}

int main () {
	int a, b, s;
	cin >> n >> m >> s;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		ans[a][b] = ans[b][a] = 1; 
	}
	dfs(s);
	cout << endl;
	bfs(s);
}
