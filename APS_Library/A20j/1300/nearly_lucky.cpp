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
	int count = 0;

	cin >> s;
	for (auto ch : s) {
		if (ch == '4' or ch == '7')    count++;
	}

	bool flag = true;
	if (count == 0)    flag = false;
	while (count) {
		if (count % 10 == 4 or count % 10 == 7) {
			count /= 10;
			continue;
		}
		flag = false;
		break;
	}
	if (flag)    cout << "YES";
	else        cout << "NO";
	return 0;
}