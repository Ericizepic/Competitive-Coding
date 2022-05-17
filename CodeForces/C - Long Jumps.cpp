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
    //cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ar[n], best[n];
        for (int j = 0; j < n; j++)
        {
            ar[j] = 0;
            best[j] = 0;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
            best[j] += ar[j];
            if (j + ar[j] < n)
                best[j + ar[j]] = max(best[j], best[j + ar[j]]);
        }
        int res = -1;
        for (int j = 0; j < n; j++)
        {
            if (best[j]>res)
            res = best[j];
        }
        cout <<res<<'\n';
    }
    return 0;
}

//2 2 1    2 1 1 1