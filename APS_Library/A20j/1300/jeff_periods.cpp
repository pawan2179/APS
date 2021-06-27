#include<iostream>
#include<map>
#include<vector>

#define int long long

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

int32_t main() {
	//init();
	int n;
	int temp;

	map<int, vector<int>>hashmap;
	vector<pair<int, int>>ans;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		hashmap[temp].push_back(i + 1);
	}
	int d = 0;
	for (auto it : hashmap) {
		bool to_print = false;
		if (it.second.size() == 1) {
			d = 0;
			to_print = true;
		}
		else {
			n = it.second.size();
			d = it.second[n - 1] - it.second[n - 2];
			for (int i = 0; i < n - 1; i++) {
				if (it.second[i + 1] - it.second[i] != d) {
					to_print = false;
					break;
				}
				to_print = true;
			}
		}
		if (to_print) {
			ans.push_back(make_pair(it.first, d));
		}
	}
	cout << ans.size() << endl;
	for (auto it : ans) {
		cout << it.first << " " << it.second << endl;
	}
	return 0;
}