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
	int x, y, z;
	int sum_x = 0, sum_y = 0, sum_z = 0;

	cin >> n;
	while (n--) {
		cin >> x >> y >> z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}

	if (sum_x == 0 and sum_y == 0 and sum_z == 0)    cout << "YES";
	else                                            cout << "NO";

	return 0;

}