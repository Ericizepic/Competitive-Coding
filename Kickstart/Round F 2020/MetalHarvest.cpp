//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
#define pb push_back;
#define mod 1000000007
typedef unsigned long long ull;
typedef vector<int> vi;

long long t, n, a, b, best, curr, l, r, x, y, k;
//string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int s[n], e[n];
        for (int j = 0; j < n; j++)
        {
            cin >> s[j] >> e[j];
        }
        int res = 0;
        vector<pair<int, int> > v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(make_pair(s[j] + 1, e[j]));
        }
        sort(v.begin(), v.end());
        int curr = v[0].first;

        for (int j = 0; j < n; j++)
        {
            if (v[j].second >= curr)
            {
                curr = max(curr, v[j].first);
                res += (v[j].second - curr + k) / k;
                curr = curr + ((v[j].second - curr + k) / k) * k;
            }
        }

        cout << "Case #" << i + 1 << ": " << res;
        cout << '\n';
    }
    return 0;
}