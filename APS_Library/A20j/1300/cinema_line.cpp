#include<bits/stdc++.h>
using namespace std;

void init() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	init();
	int n;
	cin >> n;
	int arr[3] = {0};
	int temp;
	bool possible = true;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 25)    arr[0]++;
		else if (temp == 50) {
			if (arr[0] == 0) {
				possible = false;
				break;
			}
			else {
				arr[0]--;
				arr[1]++;
			}
		}
		else if (temp == 100) {
			if (!(arr[0] >= 3) and  !(arr[0] >= 1 and arr[1] >= 1)) {
				possible = false;
				break;
			}
			else {
				arr[2]++;
				if (arr[1] != 0) {
					arr[1]--;
					arr[0]--;
					arr[2]++;
				}
				else {
					arr[0] -= 3;
					arr[2]++;
				}
			}
		}
	}
	if (possible)    cout << "YES";
	else            cout << "NO";

	return 0;
}