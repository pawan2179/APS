#include<iostream>
using namespace std;

//directions = same, up, down, left, right
int dr[] = {0, -1, 1, 0, 0};
int dc[] = {0, 0, 0, -1, 1};

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
	//preset();

	int mat[3][3];
	int ans[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> mat[i][j];
			ans[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 5; k++) {
				int rr = i + dr[k];
				int rc = j + dc[k];

				if (rr < 0 or rc < 0 or rr >= 3 or rc >= 3)    continue;
				//cout << "i, j, rr, rc = " << i << " " << j << " " << rr << " " << rc << endl;
				ans[rr][rc] += mat[i][j];
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (ans[i][j] % 2 == 1)    cout << 0;
			else                      cout << 1;
			//cout << ans[i][j];
		}
		cout << endl;
	}
}