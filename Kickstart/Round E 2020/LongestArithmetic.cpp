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

unsigned long long t, n, k;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[n];
        int psa[n];
        for (int j = 0; j < n; j++)
        {
            cin >> ar[j];
            if (j > 0)
            {
                psa[j] = ar[j] - ar[j - 1];
            }
        }
        int max = -1;
        int temp = 1;
        for (int j = 2; j < n; j++)
        {
            if (psa[j] == psa[j - 1])
                temp++;
            else
            {
                if (temp > max)
                    max = temp;
                temp = 1;
            }
        }
        if (temp > max)
            max = temp;
        cout << "Case #" << i + 1 << ": " << max + 1 << '\n';
    }
}