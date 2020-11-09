#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int n, p, c, w, ts, td, vs[10002];
vector<pair<int, int>> v[10002];
void dfs(int s, int d) {
	if(td < d) td = d, ts = s;
	for(auto i : v[s])
		if(!vs[i.first]) {
			vs[i.first] = 1;
			dfs(i.first, d + i.second);
		}
}
int main() {
	cin >> n;
	for(int i = 1; i < n; i++) {
		cin >> p >> c >> w;
		v[p].push_back(make_pair(c, w));
		v[c].push_back(make_pair(p, w));
	}
	dfs(1, 0);
	memset(vs, 0, sizeof(vs));
	dfs(ts, 0);
	cout << td;
}
