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

vi ar;


int main()
{
    for (int i = 1; i<sqrt(1000000000); i++)
    ar.pb(i*i + (i-1)*(i-1));
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n==2){
            cout << 0 << '\n';
        }
        else{
        for (int j = 1; j<=n; j++)
        for (int k = j+1; k<=n; k++){
            if (n%2==0){
                if (k-j<n/2){
                    cout << 1 << " ";
                }
                else if (k-j==n/2){
                    cout << 0 << " ";
                }
                else if (k-j>n/2){
                    cout << -1 << " ";
                }
            }
            else{
                if (k-j<=n/2){
                    cout << 1 << " ";
                }
                else if (k-j>n/2){
                    cout << -1 << " ";
                }
            }
        }
        cout << '\n';
        }
    }
    return 0;
}
