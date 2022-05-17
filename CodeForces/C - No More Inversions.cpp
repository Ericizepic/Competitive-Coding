#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;


int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        a = n - k;
        for (int j = 1; j <= k - 1 - a; j++)
            cout << j << " ";
        for (int j = k; j > k - 1 - a; j--)
            cout << j << " ";
        cout << "\n";
    }

    return 0;
}