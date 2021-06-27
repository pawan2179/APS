#include<iostream>
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
	int n, a, b, ans = 0;

	cin >> n >> a >> b;
	int end_pos = a + 1;
	int start_pos = n - b;

	if (end_pos < start_pos) {
		ans = n - start_pos + 1;
	}
	else {
		ans = n - a;
	}
	cout << ans;
	return 0;
}