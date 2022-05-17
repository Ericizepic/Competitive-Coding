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

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[n];
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            ar[j] = s[j] - '0';
        }
        bool res = false;
        if (ar[0] == 2 && ar[1] == 0 && ar[2] == 2 && ar[3] == 0)
        {
            res = true;
        }
        else if (ar[n - 4] == 2 && ar[n - 3] == 0 && ar[n - 2] == 2 && ar[n - 1] == 0)
            res = true;
        else if (ar[0] == 2 && ar[n - 3] == 0 && ar[n - 2] == 2 && ar[n - 1] == 0)
            res = true;
        else if (ar[0] == 2 && ar[1] == 0 && ar[n - 2] == 2 && ar[n - 1] == 0)
            res = true;
        else if (ar[0] == 2 && ar[1] == 0 && ar[2] == 2 && ar[n - 1] == 0)
            res = true;

        if (res)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
        cout << '\n';
    }
    return 0;
}
/*
.X.
XXO
.X.

XXX.X
.X..X
XXX.X
..X..
..X..


*/
