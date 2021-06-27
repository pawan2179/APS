#include<iostream>
#include<unordered_map>
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

bool is_valid(int year) {
	unordered_map<int, bool> flag;
	while (year) {
		if (flag[year % 10])    return false;
		flag[year % 10] = true;
		year /= 10;
	}
	return true;
}

int main() {
	//preset();

	int year;
	cin >> year;

	while (1) {
		year += 1;
		if (is_valid(year)) {
			cout << year;
			break;
		}
	}
	return 0;
}