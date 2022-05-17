#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<ll> vi;

ll t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;

ll ar[200], psa[201];

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long double p;
        cin >> n >> p;
        ll ch = 0, temp;
        for (int j = 0; j < n; j++)
            cin >> ar[j];

        psa[0] = ar[0];

        for (int j = 1; j < n; j++)
        {
            if (ar[j] * 100 > p * psa[j - 1])
            {
                temp = ceil(100.00 * ar[j] / p);
                ch += temp - psa[j - 1];
                psa[j-1] = temp;
            }
            psa[j] = ar[j] + psa[j - 1];
        }
        cout << ch << '\n';
    }

    return 0;
}