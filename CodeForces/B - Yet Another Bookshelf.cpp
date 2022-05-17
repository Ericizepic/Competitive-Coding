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
typedef unsigned long long ull;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int res = 0;
        int ar[n];
        int l = -1, r = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
            if (ar[j] == 1)
            {
                if (l == -1)
                {
                    l = j;
                }
                else
                {
                    r = j;
                }
            }
        }
        for (int j = l; j <= r; j++)
        {
            if (ar[j] == 0)
                res++;
        }
        cout << res << '\n';
    }
    return 0;
}