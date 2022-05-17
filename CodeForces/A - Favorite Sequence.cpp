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
        for (int j = 0; j < n; j++)
            cin >> ar[j];
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
                cout << ar[j/2] << " ";
            else
            {
                cout << ar[n-1-j/2] << " ";
            }
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
