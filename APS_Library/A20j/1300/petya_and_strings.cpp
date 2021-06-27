#include<bits/stdc++.h>
using namespace std;

string toUpper(string s) {
	string temp = s;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' and s[i] <= 'z')
			s[i] -= 32;
		temp[i] = s[i];
	}
	return temp;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1;
	string s2;

	cin >> s1 >> s2;

	s1 = toUpper(s1);
	s2 = toUpper(s2);

	cout << s1.compare(s2);

	return 0;
}