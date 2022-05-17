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
        cin >> n;
        int res = 0;
        int ar[n];
        bool same = true;
        int max = INT_MIN;
        int pos = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
            if (j > 0)
            {
                if (ar[j] != ar[j - 1])
                    same = false;
            }
            if (ar[j] > max)
            {
                max = ar[j];
                pos = j;
            }
            else if (ar[j-1]>=max && ar[j]<max){
                pos = j-1;
            }
        }
        if (same)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << pos + 1 << '\n';
        }
    }
    return 0;
}