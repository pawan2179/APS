#include<bits/stdc++.h>
using namespace std;
#define   vi        vector<int>
#define   pii       pair<int,int>
#define   mii       map<int,int>
#define   si        set<int>
#define   fi        first
#define   sc        second
#define   int       long long
#define   w(t)      int t=1;while(t--)
#define   quick     ios_base::sync_with_stdio(false);cin.tie(0);
#define   endl      "\n"
const int mod = 1e9 + 7;
const int N = 4e6 + 5;
int v[N];
int ans[N] {0};
void solve()
{
    int N, K;
    cin >> N >> K;

    vector<vi> triangle(N + 1);
    vector<vi> row_sums(N + 1, {0});
    int ans = 1e15;

    priority_queue<int, vi, less<int>> q;

    for (int i = 1; i <= N; i++)
    {
        vi row(i + 1);

        for (int j = 1; j <= i; j++)
        {
            cin >> row[j];
            row_sums[i].push_back(row_sums[i].back() + row[j]);
        }
        triangle[i] = row;
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int  sum = 0;

            for (int size = 0; i + size <= N && j + size <= i + size; size++)
            {
                sum += (row_sums[i + size][j + size] -  row_sums[i + size][j - 1]);

                if (q.size() < K || sum <= q.top())
                {
                    q.push(sum);
                }
                if (q.size() > K) q.pop();
            }
        }
    }
    vi result;

    while (!q.empty())
    {
        result.push_back(q.top());
        q.pop();
    }
    sort(result.begin(), result.end());

    for (auto it : result)
        cout << it << endl;
}
int32_t main() {
    quick;
    w(t)
    {
        solve();
    }
    return 0;
}
