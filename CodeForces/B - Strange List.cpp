#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, sum = 0, z, temp, min = INT_MAX, pos = -1;
        cin >> n >> x;
        ll ar[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ar[n];
            temp = ar[n];
            z = 0;
            while (ar[n] % x == 0)
            {
                z++;
                ar[n] = ar[n] / x;
            }
            if (min > z)
            {
                min = z;
                pos = j;
            }
            ar[j] = temp;
        }
        for (int j = 0; j < n; j++)
        {
            if (j < pos)
            {
                sum += (min + 2) * ar[j];
            }
            else
            {
                sum += (min + 1)*ar[j];
            }
        }
        cout << sum << '\n';
    }
    return 0;

    //1 4 7 = > 1 2 3 = 6
}