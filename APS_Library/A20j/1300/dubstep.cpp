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
	//init();

	string str;
	cin >> str;

	bool started = false;
	string ans;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'W' and str[i + 1] == 'U' and str[i + 2] == 'B') {
			i += 2;
			if (started) {
				ans.append(" ");
				started = false;
			}
		}
		else {
			started = true;
			ans += str[i];
		}
	}
	cout << ans;
	return 0;
}