#include<bits/stdc++.h>
using namespace std;

#define w(t)    int t; cin>>t; while(t--)
#define int long long int

void solve(int n, int a, int b, int x) {
	if (x > (a * b))    cout << -1;
	else {
		int end_zero = x / b;
		int start_zero = a - ceil((double)x / b);
		int one_shifted = x % b;

		if (one_shifted == 0)    one_shifted = b;
		int one_remaining = b - one_shifted;

		int arr[n] = {0};
		int i = n - 1;

		// cout << "start_zero = " << start_zero << endl;
		// cout << "end_zero = " << end_zero << endl;
		// cout << "one_shifted = " << one_shifted << endl;
		// cout << "one_remaining = " << one_remaining << endl;

		while (end_zero--) {
			arr[i--] = 0;
		}
		while (one_remaining--) {
			arr[i--] = 1;
		}
		i = 0;
		while (start_zero--) {
			arr[i++] = 0;
		}
		while (one_shifted--) {
			arr[i++] = 1;
		}

		for (int i = 0; i < n; i++)    cout << arr[i] << " ";
	}
}

int32_t main() {
	int n, a, x;

	cin >> n >> a >> x;

	int b = n - a;
	solve(n, a, b, x);
}