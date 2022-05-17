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
    //cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        int ar[n];
        for (int j = 0; j < n; j++)
        {
            ar[j] = s[j] - '0';
        }
        int dub = 0;
        for (int j = 1; j < n; j++)
        {
            if (ar[j] == ar[j - 1])
                dub++;
        }
        cout << (dub+1)/2 << '\n';
    }
    return 0;
}