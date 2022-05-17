#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<ll> vi;

ll t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;

int num[10][10];

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> d;
        if (num[d][1] == 0)
            for (int j = 0; j <= 9; j++)
            {
                for (int k = d; k <= 10 * d; k += d)
                    if (k % 10 == j)
                    {
                        num[d][j] = k;
                        break;
                    }
                for (int k = 0; k <= 9; k++)
                    if (num[d][k] == 0)
                        num[d][k] = d * 10 + k;
            }
            
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            if (a >= num[d][a % 10])
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
    return 0;
}