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
#define pb push_back;
#define mod 1000000007
typedef unsigned long long ull;
typedef vector<int> vi;

long long t, n, a, b, best, curr, l, r, x, y;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int max = 1;
        cin >> n >> x;
        int a[n];
        vector<pair<int, int> > v;
        vi b;
        for (int j = 0; j < n; j++)
            cin >> a[j];
        for (int j = 0; j < n; j++)
        {
            a[j] = (a[j] + x - 1) / x; //number of times needed to go in
            v.push_back(make_pair(a[j], j + 1));
        }
        sort(v.begin(), v.end());

        cout << "Case #" << i + 1 << ": ";
        for (int j = 0; j <n; j++)
        {
            cout << v[j].second << " ";
        }
        cout << '\n';
    }
    return 0;
}