#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<ll> vi;

ll t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vi ar, num;
        bool b = true;
        for (int j = 0; j < 2 * n; j++)
        {
            cin >> a;
            ar.push_back(a);
        }
        sort(ar.rbegin(), ar.rend());
        if (ar[0] % (2 * n) != 0)
        {
            b = false;
        }
        else
        {
            num.push_back(ar[0] / (2 * n));

            for (ll j = 0; j < 2 * n; j++)
            {
                if (j % 2 == 1)
                {
                    if (ar[j] != ar[j - 1])
                        b = false;
                }
                if (j % 2 == 0 && j != 0)
                {
                    x = j / 2;
                    if (ar[j] % 2 != 0)
                        b = false;
                    else
                    {
                        ll temp = (ar[j] - ar[j - 2] + 2 * (n - x) * num[x - 1]);
                        if (temp % (2 * (n - x)) != 0)
                            b = false;
                        else
                            num.push_back(temp / (2 * (n - x)));
                    }
                }
            }
            for (int j = 0; j < num.size(); j++)
            {
                if (num[j] <= 0)
                    b = false;
                if (j != 0)
                    if (num[j] >= num[j - 1])
                        b = false;
            }
        }
        if (b)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
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