#include<bits/stdc++.h>
using namespace std;
#define   vi        vector<int>
#define   pii       pair<int,int>
#define   mii       map<int,int>
#define   si        set<int>
#define   fi        first
#define   sc        second
#define   int       long long
#define   w(t)      int t;t=1;while(t--)
#define   quick     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   endl      "\n"
void solve() {
    int n, k;
    cin >> n >> k;

    vi a(n), s(k, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<bool>> found(k + 1), dupli(k + 1);

    int i = 0;
    while (i <= k)
    {
        size_t size = (100 * 100) + 1;

        found[i].resize(size, 0);
        dupli[i].resize(size, 0);
        i++;
    }

    found[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int count = k; count > 0; count--)
        {
            for (int j = 0; j < found[count].size() - 1; j++)
            {
                if (!found[count - 1][j]) continue;

                int sum = j + a[i];

                if (dupli[count - 1][j] || found[count][sum])
                {
                    dupli[count][sum] = found[count][sum] = 1;
                }
                else
                {
                    found[count][sum] = 1;
                }
            }
        }
    }
    long ans = 0;

    for (int i = 0; i < found[k].size(); i++)
    {
        if (found[k][i] && !dupli[k][i])
        {
            ans += i;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    quick;
    w(t) {
        solve();
    }
    return 0;
}

