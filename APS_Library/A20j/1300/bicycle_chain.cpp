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

int main() {
	//init();
	int n;
	int m;

	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++)    cin >> a[i];

	cin >> m;
	int b[m];

	for (int i = 0; i < m; i++)    cin >> b[i];

	int max = INT_MIN;
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((b[j] % a[i]) == 0) {
				if ((b[j] / a[i]) > max) {
					max = (b[j] / a[i]);
					count = 1;
					//cout << "Reset " << b[j] << " " << a[i] << endl;
				}
				else if ((b[j] / a[i]) == max) {
					count++;
					//cout << b[j] << " " << a[i] << endl;
				}
			}
		}
	}
	cout << count;
	return 0;
}