#include<iostream>
#include<vector>
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

	int n;
	int k;

	cin >> n >> k;
	string s;
	cin >> s;

	while (k--) {
		for (int i = 1; i < n; i++) {
			if (s[i] == 'G' and s[i - 1] == 'B') {
				s[i - 1] = 'G';
				s[i] = 'B';
				i++;
			}
		}
	}
	cout << s << endl;
	return 0;
}