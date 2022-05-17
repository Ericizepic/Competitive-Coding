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
        cin >> n >> a >> b >> c;
        int ar[a + b - c + 1];

        if (a + b - c > n)
            cout << "Case #" << i + 1 << ": IMPOSSIBLE" << '\n';
        else if (n !=1 && a == 1 && b == 1)
        {
            cout << "Case #" << i + 1 << ": IMPOSSIBLE" << '\n';
        }
        else if (n == 2)
        {
            if (a == 1 && b == 2 && c == 1)
            {
                cout << "Case #" << i + 1 << ": 2 1" << '\n';
            }
            else if (a == 2 && b == 1 && c == 1)
                cout << "Case #" << i + 1 << ": 1 2" << '\n';
            else if (a == 2 && b == 2 && c == 2)
                cout << "Case #" << i + 1 << ": 2 2" << '\n';
            else
            {
                cout << "Case #" << i + 1 << ": IMPOSSIBLE" << '\n';
            }
        }
        else
        {
            for (int j = 1; j <= a - c; j++)
            {
                ar[j] = 2;
            }

            for (int j = a - c + 1; j <= a; j++)
            {
                ar[j] = n;
            }

            for (int j = a + 1; j <= a + b - c; j++)
            {
                ar[j] = 2;
            }
            cout << "Case #" << i + 1 << ": ";

            if (a > b)
            {
                cout << ar[1] << " ";
                for (int j = 0; j < n - (a + b - c); j++)
                    cout << 1 << " ";
                for (int j = 2; j <= a + b - c; j++)
                    cout << ar[j] << " ";
            }
            else
            {
                for (int j = 1; j < a + b - c; j++)
                    cout << ar[j] << " ";
                for (int j = 0; j < n - (a + b - c); j++)
                    cout << 1 << " ";
                cout << ar[a + b - c] << " ";
            }
            cout << "\n";
        }
    }
}