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

ll t, n, a, b, best, curr, x, y, sum, res, l, r, k;
string s;


int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
            if (n%2==0){
                cout << (k-1)%n + 1 << '\n';
            }
            else{
                k = k+(k-1)/(n/2);
                cout << (k-1)%n + 1 << '\n';
            }
        }
    
    return 0;
}