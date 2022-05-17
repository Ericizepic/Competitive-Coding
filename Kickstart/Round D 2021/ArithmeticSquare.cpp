#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll n, m, k, x, y, z;
bool can;

int main()
{
    cin >> x;
    ll ar[3][3];
    for (int i = 0; i < x; i++)
    {
        ll count = 0;
        for (int j = 0; j < 3; j++)
            cin >> ar[0][j];
        cin >> ar[1][0] >> ar[1][2];
        for (int j = 0; j < 3; j++)
            cin >> ar[2][j];

        vector<ll> v;

        if (ar[0][0] + ar[2][0] == 2 * ar[1][0])
            count++;
        if (ar[0][2] + ar[2][2] == 2 * ar[1][2])
            count++;
        if (ar[0][0] + ar[0][2] == 2 * ar[0][1])
            count++;
        if (ar[2][0] + ar[2][2] == 2 * ar[2][1])
            count++;

        if ((ar[1][0] + ar[1][2]) % 2 == 0)
            v.push_back((ar[1][0] + ar[1][2]) / 2);
        if ((ar[0][1] + ar[2][1]) % 2 == 0)
            v.push_back((ar[0][1] + ar[2][1]) / 2);
        if ((ar[0][0] + ar[2][2]) % 2 == 0)
            v.push_back((ar[0][0] + ar[2][2]) / 2);
        if ((ar[0][2] + ar[2][0]) % 2 == 0)
            v.push_back((ar[0][2] + ar[2][0]) / 2);

        sort(v.begin(), v.end());

        ll temp = 1, fin = 0;
        for (int j = 1; j < v.size(); j++){
            if (v[j] == v[j - 1])
                temp++;
            else{
                fin = max(fin, temp);
                temp = 1;
            }
        }
        if (v.size()==0)
        temp = 0;
        fin = max(fin, temp);
        cout << "Case #" << (i+1) << ": " << count + fin << '\n';
    }
    return 0;
}