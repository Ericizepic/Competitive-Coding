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

unsigned long long t, n;
string s;

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[10000];
        for (int j = 0; j<n; j++){
            cin >> ar[j];
        }
        for (int j = 0; j<n; j++){
            cout << ar[n-1-j] << " ";
        }
        cout << '\n';
    }
}