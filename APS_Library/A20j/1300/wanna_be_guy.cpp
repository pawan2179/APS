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

int main() {
	init();
	int n;
	cin >> n;
	int count[n + 1] = {0};

	int p, q;
	int temp;
	cin >> p;
	while (p--) {
		cin >> temp;
		if (temp <= n)    count[temp] = 1;
	}
	cin >> q;
	while (q--) {
		cin >> temp;
		if (temp <= n)    count[temp] = 1;
	}

	bool possible = true;
	for (int i = 1; i <= n; i++) {
		if (count[i] == 0) {
			possible = false;
			break;
		}
	}
	if (possible)    cout << "I become the guy.";
	else            cout << "Oh, my keyboard!";
	return 0;
}