#include<iostream>
#include<unordered_map>

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
	string s;
	unordered_map<string, int> hashmap;

	cin >> n;
	while (n--) {
		cin >> s;
		hashmap[s]++;
	}
	string ans = "";
	int max = INT_MIN;
	for (auto it : hashmap) {
		if (it.second > max)    {
			max = it.second;
			ans = it.first;
		}
	}
	cout << ans;
	return 0;
}