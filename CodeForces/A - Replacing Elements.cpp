#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim;
string s;

ll c[300001], k[300001], temp[300001];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n;
        cin >> n >> m;
        bool b = true;
        int ar[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
        }
        sort(ar, ar+n);
        if (ar[0] + ar[1]<= m || ar[n-1]<=m)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

// 1 2 2 0 1 1