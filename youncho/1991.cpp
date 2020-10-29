#include <iostream>
using namespace std;
int n, i;
char p, l, r, arr[100][2];
void solve(char x) {
	if(i == 0) cout << x; //전위 
	if(arr[x][0] != '.') solve(arr[x][0]);
	if(i == 1) cout << x; //중위 
	if(arr[x][1] != '.') solve(arr[x][1]);
	if(i == 2) cout << x; //후위 
}
int main() {
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> p >> l >> r;
		arr[p][0] = l, arr[p][1] = r;
	}
	for(i = 0; i < 3; i++) {
		solve('A'); 
		cout << "\n";
	}
}         
