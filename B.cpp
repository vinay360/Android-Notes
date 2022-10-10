#include<bits/stdc++.h>
using namespace std;

long long good(long long n) {
	if(n == 0)	return 0;
	long long cnt = 0, b = sqrt(n), sq = b*b, l = n-sq;
	cnt = (b-1)*3;
	cnt += (l/b);
	return ++cnt;
}

// void solve() {
// 	long long l, r;
// 	cin >> l >> r;
// 	long long start = sqrt(l), end = sqrt(r);
// 	long long ans = 0;
// 	long long prev = l;
// 	for(long long i = start;i <= end;i++) {
// 		long long next = (i == end ? r : (i+1)*(i+1)-1);
// 		ans += (prev%i == 0 ? (next/i - prev/i + 1) : (next/i - prev/i));
// 		prev = next+1;
// 	}
// 	cout << ans << endl;
// }
void solve() {
	long long l, r;
 	cin >> l >> r;
 	l--;
 	cout << good(r) - good(l) << endl;
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