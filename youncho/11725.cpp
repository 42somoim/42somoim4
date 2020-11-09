#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, v1, v2, cq, vs[100002];
queue<int> q;
vector<int> v[100002];
int main() {
	cin >> n;
	for(int i = 1; i < n; i++) {
		scanf("%d %d", &v1, &v2);
		v[v1].push_back(v2);
		v[v2].push_back(v1);
	}
	q.push(1); vs[1] = 1;
	while(!q.empty()) {
		cq = q.front(); q.pop();
		for(auto i : v[cq])
			if(!vs[i]) {
				vs[i] = cq;
				q.push(i);
			}
	}
	for(int i = 2; i <= n; i++)
		printf("%d\n", vs[i]);
}
