#include<bits/stdc++.h>
using namespace std;

#define MAX 2005

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	int x, y;
	unordered_map<int, vector<int>> x_adj_list;
	unordered_map<int, vector<int>> y_adj_list;
	vector<pair<int, int>> points;

	cin >> n;
	while (n--) {
		cin >> x >> y;
		points.push_back(make_pair(x, y));
		x_adj_list[x].push_back(y);
		y_adj_list[y].push_back(x);
	}

	int ans = 0;
	for (auto it : points) {
		x = it.first;
		y = it.second;

		bool x_small = false, x_large = false;
		bool y_small = false, y_large = false;

		for (auto y_var : x_adj_list[x]) {
			if (y_var < y)    y_small = true;
			else if (y_var > y)    y_large = true;
		}

		for (auto x_var : y_adj_list[y]) {
			if (x_var < x)    x_small = true;
			else if (x_var > x)    x_large = true;
		}

		if (x_small and x_large and y_small and y_large)    ans++;
	}
	cout << ans;
	return 0;
}