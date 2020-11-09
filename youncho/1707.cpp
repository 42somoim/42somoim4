#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int t, v, e, x, y, chk[20002], vst[20002], ans;
vector<int> g[20002];
void dfs(int s) {
	for(auto i : g[s]) {
		if(!chk[i]) chk[i] = chk[s] * -1, dfs(i);
		else if(chk[i] == chk[s]) ans = 0;
	}
}
int main() {
	cin >> t;
	while(t--) {
		memset(chk, 0, sizeof(chk));
		memset(g, 0, sizeof(g));
		memset(vst, 0, sizeof(vst));
		ans = 1;
		scanf("%d %d", &v, &e);
		for(int i = 0; i < e; i++) {
			scanf("%d %d", &x, &y);
			g[x].push_back(y);
			g[y].push_back(x);
		}
		for(int i = 1; i <= v; i++)
			if(!chk[i]) chk[i] = 1, dfs(i);
		cout << (ans ? "YES" : "NO") << endl;
	}
}
