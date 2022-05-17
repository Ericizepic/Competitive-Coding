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

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;
vi adj[200001];
vi temp[200001];
int pop[200001];
int access[200001];

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int ar[n + 1];
        int good;
        for (int j = 1; j <= n; j++)
        {
            cin >> ar[j];
        }
        good = n;
        for (int j = n; j > 0; j--)
        {
            if (ar[j] == j)
                good--;
            else
            {
                break;
            }
        }
        double p[n + 1];
        for (int j = 0; j <= n; j++)
        {
            p[j] = 0;
        }
        double res = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a;
            cin >> p[a];
            if (a>=good){
                res += p[a]*(1-res);
            }
        }
        if (good == 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << res<<'\n';
        }
        
    }
    return 0;
}
/*
.X.
XXO
.X.

XXX.X
.X..X
XXX.X
..X..
..X..


*/
