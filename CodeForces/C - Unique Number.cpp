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

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int ar[10];
        for (int j = 0; j<10; j++){
            ar[j] = 0;
        }
        if (n>45)
        cout << "-1";
        else{
            for (int j = 9; j>=0; j--){
                if (n-j>=0){
                    ar[j] = 1;
                    n = n-j;
                }
            }
            for (int j = 1; j<10; j++){
                if (ar[j]==1)
                cout << j;
            }
        }
        cout << '\n';
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
