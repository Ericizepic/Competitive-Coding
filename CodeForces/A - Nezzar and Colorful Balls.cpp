#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;

int ar[1000];
int psa[200010];
int mar[200010];
int sums[2];

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j <= n; j++)
            ar[j] = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            ar[a]++;
        }
        best = 0;
        for (int j = 0; j <=n; j++)
        {
            best = max(best, ar[j]);
        }
        cout << best << '\n';
    }
    return 0;
}