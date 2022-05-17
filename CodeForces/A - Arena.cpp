#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define f first
#define s second
#define pb push_back
#define er equal_range
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

ll t, n, a, b, best, curr, x, y, sum, res, l, r;
string s;

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vi ar;
        for (int j = 0 ;j<n; j++){
            cin >> a;
            ar.pb(a);
        }
        sum = 0;
        sort(ar.begin(), ar.end());
                for (int j = 0 ;j<n; j++){
                    if (ar[j]!= ar[0])
                    sum++;
                }
        cout << sum << '\n';
    }
    return 0;
}