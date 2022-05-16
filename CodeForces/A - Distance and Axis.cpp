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
        cin >> n >> k;
        if (n <= k)
            cout << k - n << '\n';
        else if (k % 2 == 1)
        {
            cout << (n + 1) % 2 << '\n';
        }
        else if (k % 2 == 0)
        {
            cout << n % 2 << '\n';
        }
    }
}