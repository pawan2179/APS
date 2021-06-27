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
	if (s[0] >= 'a' and s[0] <= 'z') {
		s[0] -= 32;
	}
	cout << s;
	return 0;
}