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
	bool valid = true;
	int i = 0;
	cin >> s;
	int len = s.length();

	while (i < len) {
		if (s[i] != '1') {
			valid = false;
			break;
		}
		else if (i + 1 < len and s[i + 1] == '4') {
			i += 1;
			if (i + 1 < len and s[i + 1] == '4')
				i += 1;
		}
		i++;
	}
	if (valid)    cout << "YES";
	else         cout << "NO";
}