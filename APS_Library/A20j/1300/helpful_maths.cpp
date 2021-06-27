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
	int one_count = 0;
	int two_count = 0;
	int three_count = 0;
	int plus = 0;

	cin >> s;

	for (auto x : s) {
		if (x == '1')    one_count++;
		else if (x == '2')    two_count++;
		else if (x == '3')    three_count++;
		else                 plus++;
	}

	while (one_count--) {
		cout << "1";
		if (plus) {
			cout << "+";
			plus--;
		}
	}
	while (two_count--) {
		cout << "2";
		if (plus) {
			cout << "+";
			plus--;
		}
	}
	while (three_count--) {
		cout << "3";
		if (plus) {
			cout << "+";
			plus--;
		}
	}

	return 0;
}