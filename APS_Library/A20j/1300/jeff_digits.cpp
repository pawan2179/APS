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

	int n;
	int temp;
	int five_count = 0;
	int zero_count = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 5)    five_count++;
		else             zero_count++;
	}

	if (zero_count == 0)    cout << -1;
	else if (five_count < 9)                   cout << 0;
	else {
		for (int i = 0; i < (five_count / 9); i++) {
			for (int j = 0; j < 9; j++)        cout << 5;
		}
		while (zero_count--)                   cout << 0;
	}
	return 0;

}