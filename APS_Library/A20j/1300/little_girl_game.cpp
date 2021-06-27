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
	cin >> s;

	int odd_count = 0;
	int arr[26] = {0};
	cin >> s;
	for (char ch : s)    arr[ch - 'a']++;

	for (int i = 0; i < 26; i++) {
		if (arr[i] % 2 != 0)    odd_count++;
	}
	if (odd_count != 0 and odd_count % 2 == 0)    cout << "Second";
	else                    cout << "First";

	return 0;
}