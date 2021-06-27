#include<iostream>
#include<limits>
using namespace std;

#define int long long int
#define MAX 1000000001
void preset(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	//preset();
	int n;
	int temp;
	int min = INT_MAX;
	int min_ind = INT_MAX;
	bool repeated = false;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp < min) {
			min = temp;
			min_ind = i;
			repeated = false;
		}
		else if (temp == min) {
			repeated = true;
		}
	}
	if (repeated)    cout << "Still Rozdil";
	else            cout << min_ind + 1;

	return 0;
}