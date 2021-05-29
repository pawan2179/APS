#include<bits/stdc++.h>
using namespace std;

#define w(t)    int t; cin>>t; while(t--)
#define int long long int

int32_t main() {
	int l, r;
	w(t) {
		cin >> l >> r;

		int c, b;

		int count = 0;

		for (int i = l; i <= r; i++) {
			c = 4 * i;
			for (int j = l; j * j <= c; j++) {
				b = 4 * j * j;

				if (floor(sqrt(b - c)) == ceil(sqrt(b - c)) and (int)sqrt(b - c) % 2 == 0) {
					count++;
				}
			}

		}

		cout << count << endl;
	}
	return 0;
}