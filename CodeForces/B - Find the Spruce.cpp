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
        cin >> m >> n;
        int ar[m][n];
        ull count = 0;

        int temp1 = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> s;
            for (int k = 0; k < n; k++)
            {
                if (s[k] == '*')
                {
                    ar[j][k] = 1;
                    count++;
                }
                else
                {
                    ar[j][k] = 0;
                }
            }
        }

        for (int j = 1; j <= min(m, n / 2); j++)
        {
            int temp[m][n];
            for (int k = 0; k < m; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    temp[k][l] = 0;
                }
            }
            for (int k = j; k < m; k++)
            {
                for (int l = j; l < n - j ; l++)
                {
                    if (ar[k][l] == 1 && ar[k - 1][l] == 1 && ar[k][l - 1] == 1 && ar[k][l + 1] == 1)
                    {
                        temp[k][l] = 1;
                        count++;
                    }
                }
            }
            for (int k = 0; k < m; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    ar[k][l] = temp[k][l];
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}