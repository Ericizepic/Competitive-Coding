//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
#define pb push_back;
#define mod 1000000007
typedef unsigned long long ull;
typedef vector<int> vi;

unsigned long long t, n;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long ar[n];
        long long  psa[n];
        long long cost = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
        }
        psa[0] = ar[0];
        for (int j = 1; j < n; j++)
        {
            psa[j] = psa[j - 1] + ar[j];
        }
        long long min = __LONG_LONG_MAX__;
        for (int j = 0; j < n; j++)
        {
            if (psa[j] < min)
                min = psa[j];
        }
        if (min >= 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << min*-1 << '\n';
        }
    }
}