#include<iostream>
#define MAX 10004
using namespace std;

void get_factors(int factors[], int n) {
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			factors[i]++;
			factors[n / i] ++;
		}
	}
	return ;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y, z;
	int ans = 0;
	int max = INT_MIN;
	int factors[MAX] = {0};

	cin >> x >> y >> z;

	if (x > y and x > z)    max = x;
	else if (y > z)         max = y;
	else                   max = z;

	get_factors(factors, x);
	get_factors(factors, y);
	get_factors(factors, z);

	for (int i = max; i > 0; i--) {
		if (factors[i] != 0 and factors[i] % 2 == 0) {
			ans += 4 * (factors[i] / 2);
			factors[i] = 0;
		}
	}
	cout << ans;
	return 0;

}