#include<iostream>
using namespace std;

void preset(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	preset();

	int n;
	cin >> n;

	if (n % 2 != 0)    cout << -1;
	else {
		int odd = 1;
		int even = 2;

		while (even <= n) {
			cout << even << " ";
			cout << odd << " ";
			even += 2;
			odd += 2;
		}
	}
	return 0;
}