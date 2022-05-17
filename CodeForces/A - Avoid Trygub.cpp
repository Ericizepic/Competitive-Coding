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
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        int ar[6];
         for (int j = 0; j < 6; j++)
        {
            ar[j]= 0;
        }
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 't')
            {
                ar[0]++;
            }
            else if (s[j] == 'r')
            {
                ar[1]++;
            }
            else if (s[j] == 'y')
            {
                ar[2]++;
            }
            else if (s[j] == 'g')
            {
                ar[3]++;
            }
            else if (s[j] == 'u')
            {
                ar[4]++;
            }
            else if (s[j] == 'b')
            {
                ar[5]++;
            }
        }
        for (int j = 0; j < n; j++)
            if (s[j] != 't' && s[j] != 'r' && s[j] != 'y' && s[j] != 'g'&&  s[j] != 'u'&&  s[j] != 'b')
            {
                cout << s[j];
            }
        for (int j = 0; j < ar[5]; j++)
            cout << "b";
        for (int j = 0; j < ar[4]; j++)
            cout << "u";
        for (int j = 0; j < ar[3]; j++)
            cout << "g";
        for (int j = 0; j < ar[2]; j++)
            cout << "y";
        for (int j = 0; j < ar[1]; j++)
            cout << "r";
        for (int j = 0; j < ar[0]; j++)
            cout << "t";
        cout << '\n';
    }
    return 0;
}