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

	int k;
	string s;

	int count[26] = {0};
	bool possible = true;

	cin >> k;
	cin >> s;

	for (auto ch : s) {
		count[ch - 'a']++;
	}

	vector<char> ans;
	for (int i = 0; i < 26; i++) {
		if (count[i] % k != 0) {
			possible = false;
			break;
		}
		else {
			for (int j = 0; j < count[i] / k; j++) {
				ans.push_back((char)(97 + i));
			}
		}
	}
	if (possible)    for (int i = 0; i < k; i++)    for (auto ch : ans)    cout << ch;
	else            cout << -1;

	return 0;
}