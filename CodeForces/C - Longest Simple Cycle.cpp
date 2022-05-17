#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<ll> vi;

ll t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;

ll dp[100001], len[100001];

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        ll ar[n]; //if we stopped
        ll pos[n][2];
        ll stay[n];
        for (int j = 0; j < n; j++)
            cin >> ar[j];
        for (int j = 0; j < n; j++)
            cin >> pos[j][0];
        for (int j = 0; j < n; j++)
            cin >> pos[j][1];


        for (int j = n - 1; j >= 0; j--)
        {
            if (j == 0)
            {
                len[j] = dp[j + 1] + 2 + abs(pos[j + 1][1] - pos[j + 1][0]);
            }else if (j==n-1){
                dp[j] = ar[j] - 1;
                len[j] = 0;
            }
            else if (pos[j + 1][0] == pos[j + 1][1]) // if at end
            {
                dp[j] = ar[j] - 1;
                len[j] = dp[j + 1] + 2;
            }
            else
            {
                dp[j] = max(dp[j + 1] + 1 + ar[j] - abs(pos[j + 1][1] - pos[j + 1][0]), ar[j] - 1);
                len[j] = dp[j + 1] + 2 + abs(pos[j + 1][1] - pos[j + 1][0]);
            }
        }
        ll res = -1;
        for (int j = 0; j < n; j++)
        {
            //cout << len[j] << " " << dp[j] << '\n';
            res = max(res, len[j]);
        }
        cout << res << '\n';
    }
    return 0;
}

// 0 1 2 3 4
// a => 2 3

// 0 => loser
// 1 => loser
// 2= > winner
// 3= > winner
// 4 => winner