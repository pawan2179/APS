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

	int n;
	string s;
	int x = 0;

	cin >> n;
	while (n--) {
		cin >> s;
		bool plus = false;
		for (auto x : s) {
			if (x == '+') {
				plus = true;
				break;
			}
		}
		if (plus)    x++;
		else        x--;
	}
	cout << x;
	return 0;
}