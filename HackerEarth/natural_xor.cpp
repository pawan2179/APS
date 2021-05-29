#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define w(t) int t; cin>>t; while(t--)

void solve(int n) {


	if ((n + 1) % 4 == 0)    cout << 0 << endl;
	else {
		int newNo = (n / 4) * 4;
		if (newNo > 1)    newNo -= 1;
		cout << n - newNo << " ";
		for (int i = n; i > newNo; i--)    cout << i << " ";
		cout << endl;
	}
}

int32_t main() {
	w(t) {
		int n;
		cin >> n;

		solve(n);
	}
	return 0;
}