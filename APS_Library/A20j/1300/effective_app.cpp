#include<iostream>
#include<unordered_map>
using namespace std;

#define int long long int

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
	int sum_v = 0;
	int sum_s = 0;
	int n, m, temp;
	unordered_map<int, int> hashmap;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		hashmap[temp] = i;
	}

	cin >> m;
	while (m--) {
		cin >> temp;
		sum_v += hashmap[temp];
		sum_s += n - hashmap[temp] + 1;
	}

	cout << sum_v << " " << sum_s << endl;

	return 0;
}