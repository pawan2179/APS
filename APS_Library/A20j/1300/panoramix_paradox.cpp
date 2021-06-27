#include<iostream>
#include<vector>
using namespace std;

void preset(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool is_prime(int n) {

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)    return false;
	}
	return true;
}

int main() {
	//preset();

	int n, m;
	cin >> n >> m;

	bool flag = false;
	for (int i = n + 1; i <= m; i++) {
		if (is_prime(i)) {
			if (flag) {
				flag = false;
				break;
			}
			else    flag = true;
		}
	}

	if (flag)    cout << "YES";
	else        cout << "NO";

	return 0;
}