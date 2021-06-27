#include<bits/stdc++.h>

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

	queue<int> s1;
	for (int i = 0; s[i] != '\0'; i++)
		s1.push(s[i] - '0');

	cin >> s;
	queue<int> s2;
	for (int i = 0; s[i] != '\0'; i++)
		s2.push(s[i] - '0');

	while (!s1.empty()) {
		int x = s1.front();
		int y = s2.front();

		s1.pop();
		s2.pop();

		cout << (x xor y);
	}
	return 0;
}