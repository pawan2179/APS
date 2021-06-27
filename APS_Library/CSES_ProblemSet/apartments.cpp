#include<bits/stdc++.h>
using namespace std;

#define int long long

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	init();
	int n, m, k;
	cin >> n >> m >> k;

	int request[n];
	int apartment[m];

	for (int i = 0; i < n; i++)    cin >> request[i];
	for (int i = 0; i < m; i++)    cin >> apartment[i];

	sort(request, request + n);
	sort(apartment, apartment + m);

	int ans = 0;
	int p_apart = 0;
	int p_appli = 0;

	while (p_apart < m and p_appli < n) {
		if (apartment[p_apart] <= request[p_appli] + k and apartment[p_apart] >= request[p_appli] - k) {
			ans++;
			p_appli++;
			p_apart++;
		}
		else if (apartment[p_apart] < request[p_appli] - k) {
			p_apart++;
		}
		else    p_appli++;
	}

	cout << ans;
	return 0;
}