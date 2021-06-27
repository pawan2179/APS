#include<bits/stdc++.h>
using namespace std;

int solve(string str1, string str2, int m, int n) {

	// Memoization table
	vector < vector<int>>dp(m + 1, vector<int>(n + 1));

	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {

			// If str1 is an empty string
			if (i == 0)    dp[i][j] = j;

			//if str2 is an empty string
			else if (j == 0)    dp[i][j] = i;

			else {

				// If the current characters of both the strings match (no need to perform any operation)
				if (str1[i - 1] == str2[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1];
				}
				else {

					// 1 + min(Insert, Remove, Replace)
					dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
				}
			}
		}
	}
	return dp[m][n];
}

int main() {
	string str1, str2;

	cin >> str1 >> str2;
	cout << solve(str1, str2, str1.length(), str2.length());

	return 0;
}