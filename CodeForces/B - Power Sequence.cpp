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
typedef long long ll;
typedef vector<int> vi;

int t, n, x;
string s;

int main()
{
    cin >> n;
    ll ar[1000000];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + sizeof(ar) / sizeof(ar[0]));

    ll best = INT64_MAX;
    for (ll i = 1; i <= min((ll)10000000, (ll)floor(pow(INT64_MAX, 1.000 / (n - 1)))); i++)
    {
        ll temp = 0;
        for (int j = 0; j < n; j++)
        {
            temp += abs(ar[j] - pow(i, j));
        }
        if (temp <= best)
        {
            best = temp;
        }
    }
    cout << best << '\n';
}