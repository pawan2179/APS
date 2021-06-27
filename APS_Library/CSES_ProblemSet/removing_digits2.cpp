#include<bits/stdc++.h>
using namespace std;

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int solve(int n) {
	int ans = 0;
	while (n) {
		int max = INT_MIN;
		int temp = n;
		while (temp) {
			if (max < temp % 10)    max = temp % 10;
			temp /= 10;
		}
		ans++;
		n -= max;
	}
	return ans;
}

int main() {
	//init();
	int n;
	cin >> n;

	cout << solve(n);
	return 0;
}