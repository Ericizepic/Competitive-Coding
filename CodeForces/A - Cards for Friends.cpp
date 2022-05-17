#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, ra, pa, rb, pb, T, c, d, m;
string s;

int main()
{
    //cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int w, h, x = 0, y = 0;
        cin >> w >> h >> n;
        while (w % 2 == 0)
        {
            x++;
            w = w / 2;
        }
        while (h % 2 == 0)
        {
            y++;
            h = h / 2;
        }
        if ((1<<x)*(1<<y) >= n)
            cout << "YES" << '\n';
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
