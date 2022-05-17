#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef unsigned long long ull;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

bool area[3000];
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[n];
        for (int j = 0; j < n; j++)
            cin >> ar[j];
        int count = 0;
        for (int j = 0; j < 3000; j++)
            area[j] = false;
        for (int j = 0; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (!area[ar[k] - ar[j]])
                {
                    area[ar[k] - ar[j]] = true;
                    count++;
                }
        cout << count << '\n';
    }
    return 0;
}