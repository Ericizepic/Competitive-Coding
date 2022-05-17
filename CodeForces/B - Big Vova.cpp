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

unsigned long long t, n, a, b, da, db;
string s;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[n];
        bool used[n];

        for (int j = 0; j < n; j++)
        {
            used[j] = false;
        }
        int max = -1;
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
        }
        sort(ar, ar + sizeof(ar) / sizeof(ar[0]));
        cout << ar[n-1] << " ";
        used[n-1] = true;
        int curr = ar[n-1];

        for (int j = 1; j < n; j++)
        {
            int max = 0;
            int remove = -1;
            for (int k = 0; k < n; k++)
            {
                if (!used[k])
                {
                    int temp = gcd(ar[k], curr);
                    if (temp > max)
                    {
                        remove = k;
                        max = temp;
                    }
                }
            }
            used[remove] = true;
            cout << ar[remove] << " ";
            curr = max;
        }
        cout << '\n';
    }
}