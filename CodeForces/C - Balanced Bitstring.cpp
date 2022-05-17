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

unsigned long long t, n, k;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k >> s;
        int ar[n];
        bool can = true;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '?')
            {
                ar[j] = -1;
            }
            else
            {
                ar[j] = s[j] - '0';
            }
        }
        int c1 = 0, c0 = 0;
        for (int j = 0; j < k; j++)
        {
            int curr = -1;
            for (int m = j; m < n; m += k)
            {
                if (ar[m] != -1 && curr == -1)
                {
                    curr = ar[m];
                    if (curr == 0)
                        c0++;
                    else
                        c1++;
                }
                if (ar[m] != -1 && ar[m] != curr)
                {
                    can = false;
                }
            }
        }
        if (c1 > k / 2 || c0 > k / 2)
            can = false;
        if (can)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}