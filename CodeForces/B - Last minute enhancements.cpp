#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef unsigned long long ull;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

int num[200002];
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[n];

        for (int j = 0; j <n; j++)
        {
            cin >> ar[j];
        }
        int count = 1;
        bool con = false;
        for (int j = 1; j < n; j++)
        {
            if (ar[j] != ar[j - 1])
            {
                count++;
            }
            if (con && ar[j] != ar[j - 1] && ar[j] != ar[j - 1] + 1)
            {
                con = false;
                count++;
            }
            if (ar[j] == ar[j - 1])
                con = true;
        }
        if (con)
        {
            count++;
        }
        cout << count << '\n';
    }
    return 0;
}