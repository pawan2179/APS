#include<iostream>
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

int main() {

	preset();

	//int t;

	//cin >> t;
	//while (t--) {

	int one_row = 0;
	int one_col = 0;
	int mat[5][5];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			cin >> mat[i][j];
			if (mat[i][j] == 1) {
				one_row = i;
				one_col = j;
			}
		}

	int ans = abs(2 - one_row) + abs(2 - one_col);
	cout << ans << endl;
	//}
	return 0;
}