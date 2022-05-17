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
        int a[3], b[3];
        for (int j = 0; j < 3; j++)
            cin >> a[j];
        for (int j = 0; j < 3; j++)
            cin >> b[j];
 
        int sum = 0;
        sum += 2 * min(a[2], b[1]);
        a[2] = a[2] - min(a[2], b[1]);
        b[2] = b[2] - min(a[2] + a[0], b[2]);
        sum -= 2 * min(a[1], b[2]);
        cout << sum << '\n';
    }
}