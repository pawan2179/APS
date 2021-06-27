#include<iostream>
#include<string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int len = s.length();

		if (len > 10) {
			cout << s[0] << len - 2 << s[len - 1];
		}
		else    cout << s;
		cout << endl;
	}
	return 0;
}

