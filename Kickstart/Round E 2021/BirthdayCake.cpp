#include <bits/stdc++.h>

using namespace std;

int k, n, a, b, c, d, temp, curr, t, R, C, r1, r2, c1, c2;

int ar[26];

int main()
{
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> R >> C >> k >> r1 >> c1 >> r2 >> c2;
        r1--;
        c1--;
        a = R - r2;
        b = C - c2;

        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(r1);
        v.push_back(r2);
        sort(v.begin(), v.end());
        int ans = 0;

        if (a == v[0])
        {
            if (r1 != R)
                ans += (R - r1 + k - 1) / k;
            if (r2 != 0)
                ans += (r2 - r1 + k - 1) / k;
            if (c1 != 0)
                ans += (c2 - c1 + k - 1) / k;
            if (c2 != C)
                ans += (c2 - c1 + k - 1) / k;
        }
        else if (b == v[0])
        {
            if (c1 != C)
                ans += (C - c1 + k - 1) / k;
            if (c2 != 0)
                ans += (c2 - c1 + k - 1) / k;
            if (r1 != 0)
                ans += (r2 - r1 + k - 1) / k;
            if (r2 != R)
                ans += (r2 - r1 + k - 1) / k;
        }
        else if (r1 == v[0])
        {
            if (r1 != 0)
                ans += (r2 + k - 1) / k;
            if (r2 != R)
                ans += (r2 - r1 + k - 1) / k;
            if (c1 != 0)
                ans += (c2 - c1 + k - 1) / k;
            if (c2 != C)
                ans += (c2 - c1 + k - 1) / k;
        }
        else
        {
            if (c1 != 0)
                ans += (c2 + k - 1) / k;
            if (c2 != C)
                ans += (c2 - c1 + k - 1) / k;
            if (r1 != 0)
                ans += (r2 - r1 + k - 1) / k;
            if (r2 != R)
                ans += (r2 - r1 + k - 1) / k;
        }
        cout << "Case #" << j + 1 << ": " << ans << '\n';
    }
    return 0;
}