#include<iostream>
#include<queue>

using namespace std;

void preset(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	//preset();

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '.')    cout << 0;
		else if (s[i] == '-') {
			if (s[i + 1] == '.')    cout << 1;
			else                   cout << 2;
			i++;
		}
	}
	return 0;
}