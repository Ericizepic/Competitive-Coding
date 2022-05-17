#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

ll t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

int main()
{
    //cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        ll n, min = 0, max = 0;
        cin >> n >> x;
        for (int j = 0; j < n; j++)
        {
            cin >> y;
            max += ceil(y*1.00 / x);
            min += y;
        }
        min = ceil(min*1.00 / x);
        cout << min << " " << max<<'\n';
    }
    return 0;
}