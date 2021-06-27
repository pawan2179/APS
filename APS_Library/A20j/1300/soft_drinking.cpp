#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k, l, c, d, p, nl, np;

	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int drink = k * l;
	int slices = c * d;
	int count = 0;

	if (drink < n * nl or slices < n or p < n * np) {
		count = 0;
	}
	else {
		while (drink >= n * nl and slices >= n and p >= n * np) {
			count++;
			drink -= n * nl;
			slices -= n;
			p -= n * np;
		}
	}
	cout << count;

	return 0;
}