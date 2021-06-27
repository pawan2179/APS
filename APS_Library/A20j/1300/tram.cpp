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
	//preset();
	int n;
	int left = 0;
	int enter = 0;
	int no = 0;
	int capacity = INT_MIN;

	cin >> n;
	while (n--) {
		cin >> left >> enter;
		no += enter - left;
		if (no > capacity)    capacity = no;
	}
	cout << capacity;
	return 0;
}