#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	int week[7];

	cin >> n;
	int sum = 0;
	int ans = -1;

	for (int i = 0; i < 7; i++) {
		cin >> week[i];

		sum += week[i];
		if (sum >= n and ans == -1)    ans = i;
	}
	if (ans == -1) {
		while (n > sum) {
			n -= sum;
		}

		sum = 0;
		for (int i = 0; i < 7; i++) {
			sum += week[i];
			if (sum >= n) {
				ans = i;
				break;
			}
		}
	}
	cout << ans +  1 << endl;
	return 0;

}