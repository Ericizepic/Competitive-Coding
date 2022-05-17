#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m;
string s;

ll c[300001], k[300001], temp[300001];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, sum = 0, lim;
        cin >> n >> m;
        for (int j = 0; j < n; j++)
            cin >> k[j];
        sort(k, k + n, greater<int>());
        for (int j = 0; j < m; j++)
            cin >> c[j];

        if (m - 1 >= n / 2)
            lim = n / 2;
        else
        {
            lim = m-1;
        }

        for (int j = 0; j < n; j++)
        {
            if (j < k[j]-1)
                sum += c[j];
            else
            {
                sum += c[k[j] - 1];
            }
        }
        cout << sum << '\n';
    }
    return 0;
}

// 15, 10   150/5 = 30