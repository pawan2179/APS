#include<bits/stdc++.h>
using namespace std;

int findMinimumStickers(vector<int> scores, int n) {

	vector<int>left(n, 1);
	vector<int>right(n, 1);

	for (int i = 1; i < n; i++) {
		if (scores[i] > scores[i - 1])    left[i] = left[i - 1] + 1;
	}

	for (int i = n - 2; i >= 0; i--) {
		if (scores[i] > scores[i + 1])    right[i] = right[i + 1] + 1;
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans += max(left[i], right[i]);
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	vector<int>scores(n);
	for (int i = 0; i < n; i++)    cin >> scores[i];

	cout << findMinimumStickers(scores, n) << endl;
	return 0;
}