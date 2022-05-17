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

int gcd(int x, int y)
{
    if (x == 0)
        return y;
    else
        return gcd(y, x % y);
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[1000];
        int sorted[1000];
        int temp = INT32_MAX;
        bool can = true;
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
            sorted[j] = ar[j];
            temp = min(temp, ar[j]);
        }
        sort(sorted, sorted + sizeof(sorted) / sizeof(sorted[0]));
        for (int j = 0; j < n; j++)
        {
            if (sorted[j] % temp != 0 && ar[j] != sorted[j])
                can = false;
        }
        if (can)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}