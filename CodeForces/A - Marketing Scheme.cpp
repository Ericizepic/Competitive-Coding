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
        cin >> a >> b;
        if (b <=2*a - 2)
        cout << "YES" << '\n';
        else
        {
        cout << "NO" << '\n';
        }
        

    }
    return 0;
}