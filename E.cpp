#include<bits/stdc++.h>
using namespace std;

void create(int n, int m, int& ans, int curr) {
	if(!n) {
		ans += curr;
		//cout << ans << " ";
		return;
	}

	for(int i = 1;i <= m;i++) {
		if(curr != -1)
			create(n-1,m,ans,(curr) & (i));
		else
			create(n-1,m,ans,i);
	}
	//cout << endl;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int ans = 0;
	create(n,m,ans,-1);
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 1;i <= t;i++) {
		//cout << "Case #" << i << ": "; 
		solve();
	}
	return 0;
}