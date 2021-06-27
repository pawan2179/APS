#include<bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int black, white;
        cin >> black >> white;

        vector<vector<int>>prev(black + 1, vector<int>(white + 1, 0));
        vector<vector<int>>cur(black + 1, vector<int>(white + 1, 0));

        prev[0][0] = 1;

        for (int i = 0; i <= black; i++) {
            for (int j = 0; j <= white; j++) {
                if (i == 0 and j == 0)    continue;

                for (int k = 0; k <= black; k++) {
                    for (int l = 0; l <= white; l++) {
                        cur[k][l] = 0;
                        int x = 0;
                        while (k >= x * i and l >= x * j) {
                            cur[k][l] += prev[k - x * i][l - x * j];
                            x++;
                        }
                        cur[i][j] %= MOD;
                    }
                }

                for (int k = 0; k <= black; k++)
                    for (int l = 0; l <= white; l++)
                        prev[k][l] = cur[k][l];
            }
        }
        cout << cur[black][white] << endl;
    }
    return 0;
}
