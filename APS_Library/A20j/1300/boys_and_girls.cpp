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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n, m;
	scanf("%d%d", &n, &m);
	char op1 = 'B';
	char op2 = 'G';

	if (n > m) {
		op1 = 'B';
		op2 = 'G';
	}
	else {
		op1 = 'G';
		op2 = 'B';
		n += m;
		m = n - m;
		n = n - m;
	}
	int i = 0, j = 0;
	while (i < n and j < m) {
		cout << op1 << op2;
		i++;
		j++;
	}
	while (i < n) {
		cout << op1;
		i++;
	}
	while (j < m) {
		cout << op2;
		j++;
	}
	return 0;
}