#include<iostream>
#include<algorithm>
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

int solve(int *correct, int *wrong, int n, int m) {
	sort(correct, correct + n);
	sort(wrong, wrong + m);

	if (correct[n - 1] >= wrong[0])    return -1;
	int ans = correct[n - 1];

	if (correct[0] * 2 > ans)    ans = correct[0] * 2;

	if (ans < wrong[0])    return ans;
	return -1;
}

int main() {
	//init();
	int n, m;
	cin >> n >> m;
	int correct[n];
	int wrong[m];

	for (int i = 0; i < n; i++)    cin >> correct[i];
	for (int i = 0; i < m; i++)    cin >> wrong[i];

	cout << solve(correct, wrong, n, m);
	return 0;
}