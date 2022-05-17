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

int t, n, a, b, best, curr, l, r, x, y, ra, pa, rb, pb, T, c, d;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a = n % 10;
        int res = 10 * a - 10;
        if (n > 1000)
        {
            res += 10;
        }
        else if (n > 100)
            res += 6;
        else if (n > 10)
            res += 3;
        else
            res += 1;
        cout << res << '\n';
    }
    return 0;
}