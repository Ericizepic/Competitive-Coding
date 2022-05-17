#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define f first
#define s second
#define pb push_back
#define er equal_range
typedef long double ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

ll t, n, a, b, best, curr, x, y, sum, res, l, r;
string s;

vi ar;


int main()
{
    for (int i = 1; i<sqrt(1000000000); i++)
    ar.pb(i*i + (i-1)*(i-1));
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        auto u = lower_bound(ar.begin(), ar.end(), n+1);
        cout << u - ar.begin()-1 << '\n';
    }
    return 0;
}