#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff  				first
#define ss 					second
#define int 				long long
#define pb 					push_back
#define mp 					make_pair
#define pii 				pair<int, int>
#define vi 					vector<int>
#define mii 				map<int, int>
#define fii(i, n)           for(int i = 0; i < n; i++)                                          // For Loop
#define pqb 				priority_queue<int>                                                	// max heap
#define pqs 				priority_queue<int, vi, greater<int> >              				// min heap
#define setbits(x) 			__builtin_popcountll(x)                             				// number of set bits
#define zrobits    			__builtin_ctzll(x)                                  				// number of 0's before first 1 from RHS
#define mod 				1000000007                                          				// Modulus 10^9 + 7
#define inf 				1e18                                                				// Infinity
#define ps(x, y)  			fixed<<setprecision(y)<<x                           				// Set precision of 'x' upto 'y' decimal places
#define mk(arr, n, type) 	type *arr= new type[n]                              				// dynamic array of name 'arr', size 'n' and type 'type'
#define w(x) 				int x; cin>>x; while(x--)                           				// while loop
mt19937 					rng(chrono::steady_clock::now().time_since_epoch().count());     	// Shuffle array randomly - 'shuffle(arr, arr+n, rng);'

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;  	// Policy Based DS

void preset() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);                               		// Fast I/O
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first > b.first)    return true;
	if (a.first == b.first and a.second < b.second)    return true;
	return false;
}

int solve() {
	int n;
	int k;

	cin >> n >> k;
	std::vector<pair<int, int>> arr;
	int a, b;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr.push_back(make_pair(a, b));
	}
	sort(arr.begin(), arr.end(), compare);

	/*for (auto it : arr) {
		cout << it.first << " " << it.second << endl;
	}*/
	int ans = count(arr.begin(), arr.end(), arr[k - 1]);
	return ans;
}

int32_t main() {

	preset();
	//CODE HERE
	cout << solve();
	return 0;
}