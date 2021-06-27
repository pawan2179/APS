#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	unordered_map<char, bool> visited;
	int distinct_count = 0;

	cin >> s;

	for (auto x : s) {
		if (visited[x])    continue;
		else {
			distinct_count++;
			visited[x] = true;
		}
	}

	if (distinct_count % 2 == 0)    cout << "CHAT WITH HER!";
	else                           cout << "IGNORE HIM!";

	return 0;
}