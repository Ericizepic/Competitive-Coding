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

int t, n, a, b, best, curr, l, r, x, y, ra, pa, rb, pb, T, c, d;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        char ar[n];
        cin >> s;
        int res = n;
        for (int j = 0; j < n; j++)
            ar[j] = s[j];

        int poo[3];
        poo[0] = 0;
        poo[1] = 0;
        poo[2] = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == '-')
                poo[0]++;
            if (s[j] == '>')
                poo[1]++;
            if (s[j] == '<')
                poo[2]++;
        }
        bool same = false;
        if (poo[1] == 0 || poo[2] == 0)
            same = true;
        
            
        if (same)
        {
            cout << res << "\n";
        }
        else
        {
            for (int j = 0; j <= n; j++)
            {
                if (ar[j] == '>' && ar[(j + 1) % n] == '<')
                    res--;
                if (ar[j] == '<' && ar[(j + 1) % n] == '>')
                    res--;
                if (ar[j] == '<' && ar[(j + 1) % n] == '<')
                    res--;
                if (ar[j] == '>' && ar[(j + 1) % n] == '>')
                    res--;
            }
            cout << res << "\n";
        }
    }
    return 0;
}