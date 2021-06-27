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

	string s[3];

	for (int i = 0; i < 3; i++) {
		cin >> s[i];
	}

	vector<int>count(26, 0);

	for (int i = 0; i < 2; i++) {
		for (auto x : s[i]) {
			count[x - 'A']++;
		}
	}

	for (auto x : s[2]) {
		count[x - 'A'] --;
	}

	bool flag = true;

	for (auto x : count) {
		if (x != 0) {
			flag = false;
			break;
		}
	}

	if (flag)    cout << "YES\n";
	else        cout << "NO\n";

	return 0;
}
