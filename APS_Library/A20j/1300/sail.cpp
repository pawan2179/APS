#include<iostream>
using namespace std;

#define int long long

void init(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {
	//init();
	int t, sx, sy, ex, ey;
	string s;

	cin >> t >> sx >> sy >> ex >> ey;
	cin >> s;

	int ans = 0;
	bool found = false;

	for (int i = 0; i < t; i++) {

		if (sx == ex and sy == ey) {
			found = true;
			break;
		}

		int new_x = sx;
		int new_y = sy;

		if (s[i] == 'E') {
			new_x += 1;
		}
		else if (s[i] == 'S') {
			new_y -= 1;
		}
		else if (s[i] == 'W') {
			new_x -= 1;
		}
		else if (s[i] == 'N') {
			new_y += 1;
		}
		if (abs(ex - new_x) <= abs(ex - sx)  and abs(ey - new_y) <= abs(ey - sy)) {
			sx = new_x;
			sy = new_y;
		}
		//cout << "Travelled, Current Position x : " << sx << " y : " << sy << endl;
		ans++;
	}
	if (found)    cout << ans;
	else if (sx != ex or sy != ey)        cout << -1;
	else                                 cout << t;

	return 0;
}