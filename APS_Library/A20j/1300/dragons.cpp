#include<bits/stdc++.h>
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

bool compare(pair<int, int>a, pair<int, int> b) {
	if (a.first < b.first)    return true;
	return false;
}

int main() {
	//init();

	int n, s;
	int a, b;
	bool win = true;

	vector<pair<int , int>> arr;

	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}

	sort(arr.begin(), arr.end(), compare);

	/*for (auto p : arr) {
		cout << p.first << " " << p.second << endl;
	}*/

	for (int i = 0; i < n; i++) {
		if (arr[i].first >= s) {
			win = false;
			break;
		}
		s += arr[i].second;
	}

	if (win)    cout << "YES";
	else       cout << "NO";

	return 0;
}