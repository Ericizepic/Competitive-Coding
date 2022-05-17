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

unsigned long long t, n, a, b, c;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> s;
        int count = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '1')
                count++;
        }

        for (int j = 0; j < n; j++)
        {
            if (count >= n)
                cout << 1;
            else
            {
                cout << 0;
            }
        }
        cout << '\n';
    }
}