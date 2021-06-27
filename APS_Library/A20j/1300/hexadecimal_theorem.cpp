#include<iostream>
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

	cin >> n;

	cout << 0 << " " << 0 << " " << n;

	//cout << num1 << " " << num3 << " " << num4;
	return 0;
}