#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	bool prints = false;

	for (auto ch : s) {
		if (ch == 'H' or ch == 'Q' or ch == '9') {
			prints = true;
			break;
		}
	}

	if (prints)    cout << "YES";
	else          cout << "NO";

	return 0;
}