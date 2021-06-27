#include<iostream>
#include<cmath>
using namespace std;

#define int long long

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	init();
	int n, m;

	cin >> n >> m;

	int odd_count = n / 2;
	if (n % 2 != 0)
		odd_count += 1;

	//cout << "odd count = " << odd_count << endl;

	if (m <= odd_count) {
		cout << (2 * (m - 1)) + 1;
	}
	else {
		m -= odd_count;
		cout << 2 * m;
	}
	return 0;
}