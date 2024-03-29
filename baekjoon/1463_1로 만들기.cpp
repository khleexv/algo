/*
1.Top down
#include <iostream>
using namespace std;
int d[1000001] = {0};
int solve(int n) {
	if (n == 1) return 0;
	if (d[n] > 0) return d[n];
	d[n] = solve(n-1) + 1;
	if (n%2 == 0) {
		if (solve(n/2)+1 < d[n]) d[n] = solve(n/2) + 1;
	}
	if (n%3 == 0) {
		if (solve(n/3)+1 < d[n]) d[n] = solve(n/3) + 1;
	}
	return d[n];
}
int main() {
	int N;
	cin >> N;
	cout << solve(N);
}
*/



/*
2.Bottom up
#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int d[N+1];
	for (int i=2;i<=N;++i) {
		d[i] = d[i-1]+1;
		if (i%2 == 0) {
			if (d[i/2] + 1 < d[i]) d[i] = d[i/2] + 1;
		}
		if (i%3 == 0) {
			if (d[i/3] + 1 < d[i]) d[i] = d[i/3] + 1;
		}
	}
	cout << d[N];
}
*/
