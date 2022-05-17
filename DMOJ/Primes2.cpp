#include <bits/stdc++.h>

typedef unsigned long long ll;

using namespace std;

bool sieve[100000];
bool seg[5000001];

vector<int> p;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    sieve[0] = true;
    sieve[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (!sieve[i])
        {
            p.push_back(i);
            for (int j = i * i; j <= n; j += i)
                sieve[i] = true;
        }
    }

    for (int i = 0; i < p.size(); i++)
    {
        int a = ceil(m * 1.00 / p[i]);
        for (int j = max(a, 2) * p[i]; j <= n; j += p[i])
            seg[j - m] = true;
    }
    for (int i = 0; i < n - m + 1; i++)
    {
        if (!seg[i] && i+m!=1)
            cout << i + m << '\n';
    }

    return 0;
}
