#include<iostream>
#include<string>
#include<unordered_map>

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

bool print_possible(string str, unordered_map<char, int>hashmap) {
	for (auto ch : str) {
		if (ch == ' ')    continue;
		else if (hashmap[ch] <= 0)    return false;
		else    hashmap[ch]--;
	}
	return true;
}

int main() {
	//init();
	string str1, str2;

	getline(cin, str1);
	getline(cin, str2);

	unordered_map<char, int>hashmap;

	for (auto ch : str1) {
		if (ch == ' ')    continue;
		hashmap[ch]++;
	}

	if (print_possible(str2, hashmap))    cout << "YES";
	else                                 cout << "NO";

	return 0;
}