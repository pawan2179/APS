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
	int n, m;
	cin >> n >> m;

	char mat[101][101];

	for (int i = 0;  i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> mat[i][j];
	}
	char first;
	char second;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			first = 'B';
			second = 'W';
		}
		else {
			first = 'W';
			second = 'B';
		}
		for (int j = 0; j < m; j += 2) {
			if (mat[i][j] == '-')    cout << '-';
			else                    cout << first;

			if (j + 1 < m) {
				if (mat[i][j + 1] == '-')    cout << '-';
				else                      cout << second;
			}
		}
		cout << endl;
	}
	return 0;
}