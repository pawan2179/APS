#include<iostream>
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

	int up_count = 0;
	int low_count = 0;

	for (auto ch : s) {
		if (ch >= 'a' and ch <= 'z')    low_count++;
		else                           up_count++;
	}

	if (up_count > low_count) {
		for (auto ch : s)    cout << (char)toupper(ch);
	}
	else {
		for (auto ch : s)    cout << (char)tolower(ch);
	}

	return 0;
}