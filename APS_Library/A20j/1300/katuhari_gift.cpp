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

bool print_possible(int count_100, int count_200) {
	if (count_200 % 2 == 0) {
		if (count_100 % 2 == 0)    return true;
		else                      return false;
	}
	else {
		if (count_100 != 0 and count_100 % 2 == 0)    return true;
		else                                         return false;
	}
	return false;
}

int main() {
	//init();

	int n;
	cin >> n;

	int temp = 0;
	int count_100 = 0;
	int count_200 = 0;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 100)    count_100++;
		else               count_200++;
	}

	if (print_possible(count_100, count_200))    cout << "YES";
	else                              cout << "NO";

	return 0;
}