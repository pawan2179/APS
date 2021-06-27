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

	int n, m;
	cin >> n >> m;
	int temp;
	int max_div = INT_MIN;
	int max_rem = INT_MIN;
	int max_ind = -1;

	int div[n];
	int rem[n];

	for (int i = 0; i < n; i++) {
		cin >> temp;
		div[i] = ceil((float)temp / m);
		rem[i] = temp % m;
	}

	/*for (int i = 0; i < n; i++) {
		cout << div[i] << ", " << rem[i] << "; ";
	}*/

	for (int i = 0; i < n; i++) {
		if (div[i] >= max_div) {
			max_ind = i;
			max_div = div[i];
			max_rem = rem[i];
		}
		/*else if (div[i] == max_div) {
			if (rem[i] >= max_rem) {
				max_rem = rem[i];
				max_ind = i;
			}
		}*/
	}
	cout << max_ind + 1;
	return 0;
}