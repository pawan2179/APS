#include<bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1e9+7

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	init();
	int n;
	cin >> n;
	vector<string>mat(n);
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		mat[i] = s;
	}

	vector<vector<int>>grid(n, vector<int>(n, 0));

	if (mat[0][0] == '*')    grid[0][0] = 0;
	else grid[0][0] = 1;

	for (int i = 1; i < n; i++) {
		if (mat[i][0] != '*' and grid[i - 1][0] != 0)
			grid[i][0] = 1;
		if (mat[0][i] != '*' and grid[0][i - 1] != 0)
			grid[0][i] = 1;
		/*	for(int j=0;j<n;j++){
				char ch;
				cin>>ch;
				if(ch=='.'){
					grid[i][j]=1;
				}
				else{
					grid[i][j]=0;
				}
			}
		}
		vector<vector<int>>dp(n,vector<int>(n,0));
		if(grid[0][0]==1){
			dp[0][0]=1;
		}
		for(int i=1;i<n;i++){
			if(dp[0][i-1]==0 or arr[0][i]==0){
				dp[0][i]=0
			}
			else{
				dp[0][i]=1;
			}
		}
		for(int i=1;i<n;i++){
			if(dp[0])*/
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (mat[i][j] != '*')
				grid[i][j] = (grid[i - 1][j] + grid[i][j - 1]) % 1000000007;
		}
	}
	cout << grid[n - 1][n - 1];
	return 0;
}