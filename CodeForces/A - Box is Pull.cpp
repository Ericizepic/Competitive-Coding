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
#define mod 1000000007
typedef unsigned long long ull;
typedef vector<int> vi;

int t, n, a, b, best, curr, l, r, x, y, s, ra, pa, rb, pb, T, c, d;
//string s;



int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >>a>> b >> c >> d;
        int res = max(a - c, c - a) + max(b - d, d -b);
    
        if (a!=c && b!=d)
            res += 2;

        cout << res << "\n";
    }
    return 0;
}