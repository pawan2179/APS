#include<iostream>
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
	//init();
	int n;

	cin >> n;
	for (int i = n; i < 2 * n; i++)    cout << i << " ";
	return 0;
}