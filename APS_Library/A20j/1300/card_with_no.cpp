#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int temp;
	vector<pair<int, int>> vec;
	int sizes[5005] = {0};

	for (int i = 0; i < 2 * n; i++) {
		scanf("%d", &temp);
		vec.push_back(make_pair(temp, i + 1));
		sizes[temp]++;
	}
	bool flag = true;
	for (int i = 0; i < 5005; i++) {
		if (sizes[i] % 2 != 0) {
			flag = false;
			break;
		}
	}
	if (flag) {
		sort(vec.begin(), vec.end());
		for (int i = 0; i < n; i++) {
			cout << vec[2 * i].second << " " << vec[2 * i + 1].second << endl;
		}
	}
	else cout << -1 << endl;
	return 0;
}