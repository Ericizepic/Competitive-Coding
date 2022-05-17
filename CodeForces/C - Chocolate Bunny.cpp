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

    cin >> n;
    int ar[n + 1];
    int a, b, curr = 1, next = 2;

    if (n == 1)
    {
        cout << "! 1" <<'\n';
        cout.flush();
    }
    else
    {
        for (int j = 2; j <= n; j++)
        {
            cout << "? " << curr << " " << next << '\n';
            cout.flush();
            cin >> a;
            cout << "? " << next << " " << curr << '\n';
            cout.flush();
            cin >> b;
            if (a > b)
            {
                ar[curr] = a;
                if (j == n)
                {
                    ar[next] = n;
                }
                curr = next;
                next = next + 1;
            }
            else
            {
                ar[next] = b;
                if (j == n)
                {
                    ar[curr] = n;
                }
                next = next + 1;
            }
        }
        cout << "! ";
        for (int j = 1; j <= n; j++)
            cout << ar[j] << " ";
        cout.flush();
    }
    return 0;
}
/*

*/