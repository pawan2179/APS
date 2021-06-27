#include<iostream>
#include<string>
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

bool can_form(string s1, string s2) {
	if (s1.length() != s2.length())    return false;
	int first = -1;
	int second = -1;

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			if (first == -1)    first = i;
			else if (second == -1)              second = i;
			else    return false;
		}
	}
	swap(s1[first], s1[second]);
	return s1 == s2 ? true : false;
}

int main() {
	//init();

	string s1, s2;
	cin >> s1 >> s2;

	if (can_form(s1, s2))    cout << "YES";
	else                    cout << "NO";

	return 0;
}