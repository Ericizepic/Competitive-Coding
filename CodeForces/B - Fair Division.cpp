#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef long long ll;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

int main()
{
    //cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int ar[2];
        ar[0]=0;
        ar[1]=0;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            ar[x - 1]++;
        }
        if (ar[0] % 2 == 0 && ar[1] % 2 == 0)
        {
            cout << "YES" << '\n';
        }
        else if (ar[1] % 2 == 1 && ar[0]%2==0 && ar[0]>1 )
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

//2 2 1    2 1 1 1