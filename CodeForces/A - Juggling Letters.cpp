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

int t, n, x;
string s;
int ar[26];

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < 26; j++)
            ar[j] = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> s;
            for (int k = 0; k < s.length(); k++)
            {
                ar[(int)s[k] - 97]++;
            }
        }
        
        bool yes = true;
        for (int j = 0; j < 26; j++)
            if (ar[j] % n != 0)
            {
                yes = false;
                break;
            }

        if (yes)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
/*

*/