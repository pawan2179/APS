#include<iostream>
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
	string s;
	string ans;
	cin >> s;

	bool one_found = false;
	bool zero_found = false;
	int pos = -1;

	for (int i = 0; s[i] != '\0'; i++) {
		if (i == s.length() - 1 and !zero_found)    break;

		if (s[i] == '0' and one_found and !zero_found) {
			zero_found = true;
			continue;
		}
		else if (s[i] == '1')    one_found = true;
		ans.push_back(s[i]);
	}
	cout << ans;
	return 0;
}