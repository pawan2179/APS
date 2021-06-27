#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, temp;
	int count = 0;
	int ans = 0;

	cin >> n;
	n += 1;
	ans = 0;
	for (int i = 0; i < n - 1; i++) {
		cin >> temp;
		ans += temp;
		//cout << "Temp = " << temp << endl;
	}
	//cout << "Ans  = " << ans << " n = " << n << endl;
	ans %= n;
	if (ans == 0)    ans = n;

	//cout << "Position = " << ans << endl;
	for (int i = 1; i <= 5; i++) {
		if ((ans + i) % n != 1) {
			//cout << (ans + i) % n << " ";
			//cout << i << " ";
			count++;
		}
	}
	cout << count;
	return 0;
}