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

int main() {
	//preset();

	unordered_map<int, bool> visited;
	int temp;
	int same_count = 0;

	for (int i = 0; i < 4; i++) {
		cin >> temp;
		if (visited[temp])    same_count++;
		else                 visited[temp] = true;
	}
	cout << same_count;
	return 0;
}