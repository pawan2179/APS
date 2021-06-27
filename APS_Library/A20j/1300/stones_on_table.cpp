#include<iostream>
#include<queue>

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
	string s;

	int count = 0;
	queue<char> que;
	cin >> n;
	cin >> s;

	for (auto ch : s)    que.push(ch);

	while (!que.empty()) {
		int num1 = que.front();
		que.pop();

		if (que.front() == num1)    count++;
	}
	cout << count << endl;
	return 0;
}