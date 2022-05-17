#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, b, best, curr, x, y, ra, pa, rb, pb, T, d, m, sum, lim, k;
string s;

int ar[100001], a[100];

int main()
{
    //cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        vector<int> b;
        b.push_back(1);
        for (int j = 1; j < n; j++)
        {
            if (s[j] == s[j - 1])
            {
                b.push_back((b[j - 1] + 1) % 2);
            }
            else if (s[j] + 1 == s[j - 1] + b[j - 1])
                b.push_back(0);
            else
                b.push_back(1);
        }
        for (int j = 0; j < n; j++)
            cout << b[j];
        cout << '\n';
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