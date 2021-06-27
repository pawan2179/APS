#include<bits/stdc++.h>
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
/*
int dr[] = {0, 0, 1, -1};
int dc[] = { -1, 1, 0, 0};
char direction[] = {'L', 'R', 'D', 'U'};*/
/*
bool dfs(char mat[1001][1001], bool visited[1001][1001], int start_row, int start_col, int n, int m, char path[], int index, int &count) {

	//cout << i << " " << j << endl;
	//cout << mat[i][j] << endl;

	if (start_row < 0 || start_col < 0 || start_row >= n || start_col >= m)    return false;
	if (mat[start_row][start_col] == '#')    return false;
	if (mat[start_row][start_col] == 'B') {
		path[index] = '\0';
		return true;
	}
	visited[start_row][start_col] = true;
	//cout << "Visited : " << i << " " << j << endl;

	for (int k = 0; k < 4; k++) {
		int rr = start_row + dr[k];
		int cc = start_col + dc[k];

		path[index] = direction[k];
		index++;
		count++;
		if (dfs(mat, visited, rr, cc, n, m, path, index , count))    return true;
		else {
			index--;
			count--;
		}
	}
	return false;
}
*/
int main() {

	//preset();

	int n;
	int m;
	int count = 0;
	int start_row = 0;
	int start_col = 0;
	char path[100005];
	char mat[1001][1001];
	bool visited[1001][1001];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
			visited[i][j] = false;
			if (mat[i][j] == 'A') {
				start_row = i;
				start_col = j;
			}
		}

	/*if (dfs(mat, visited, start_row, start_col, n, m, path, 0, count)) {
		cout << "YES";
		cout << count << endl;
		cout << path;
	}
	else    cout << "NO";*/

	return 0;
}