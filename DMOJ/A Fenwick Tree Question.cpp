#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll ar[100001];
ll bit[100001][32];
ll sums[100001];
ll n, q;

void update(ll pos, ll num, ll og)
{
    ll bits[32];
    for (int i = 0; i < 32; i++)
        bits[i] = 0;
    int curr = 0;
    while (num > 0)
    {
        bits[curr++] = num % 2;
        num = num / 2;
    }
    num = og;
    curr = 0;
    while (num > 0)
    {
        bits[curr++] -= num % 2;
        num = num / 2;
    }
    while (pos <= n) ///12 = > 9   1100   1001
    {
        for (int i = 0; i < 32; i++)
        {
            bit[pos][i] += bits[i];
        }
        pos += pos & (-pos);
    }
}

void update1(ll pos, ll num)
{
    while (pos <= n)
    {
        sums[pos] += num;
        pos += pos & (-pos);
    }
}

ll add(ll l, ll r)
{
    ll res = 0;
    int pos = r;
    while (pos > 0)
    {
        res += sums[pos];
        pos -= pos & (-pos);
    }
    pos = l - 1;
    while (pos > 0)
    {
        res -= sums[pos];
        pos -= pos & (-pos);
    }
    return res;
}

ll XOR(ll l, ll r)
{
    ll bits[32];
    for (int i = 0; i < 32; i++)
        bits[i] = 0;
    ll pos = r;
    while (pos > 0)
    {
        for (int i = 0; i < 32; i++)
        {
            bits[i] += bit[pos][i];
        }
        pos -= pos & (-pos);
    }
    pos = l - 1;
    while (pos > 0)
    {
        for (int i = 0; i < 32; i++) //// 1 1 1 0 0    1 1 1 0 0 => 3
        {
            bits[i] -= bit[pos][i];
        }
        pos -= pos & (-pos);
    }
    ll res = 0;
    for (int i = 0; i < 32; i++)
    {
        res += (1 << i) * 2 * (bits[i] * ((r - l + 1) - bits[i]));
    }
    res = (res) / 2;
    return res;
}

ll AND(ll l, ll r)
{
    ll bits[32];
    for (int i = 0; i < 32; i++)
        bits[i] = 0;
    ll pos = r;
    while (pos > 0)
    {
        for (int i = 0; i < 32; i++)
        {
            bits[i] += bit[pos][i];
        }
        pos -= pos & (-pos);
    }
    pos = l - 1;
    while (pos > 0)
    {
        for (int i = 0; i < 32; i++)
        {
            bits[i] -= bit[pos][i];
        }
        pos -= pos & (-pos);
    }
    ll res = 0;
    for (int i = 0; i < 32; i++)
    {
        res += (1 << i) * (bits[i]) * (bits[i]);
    }
    res = (res - add(l, r)) / 2;
    return res;
}

ll OR(ll l, ll r)
{
    ll bits[32];
    for (int i = 0; i < 32; i++)
        bits[i] = 0;
    ll pos = r;
    while (pos > 0)
    {
        for (int i = 0; i < 32; i++)
        {
            bits[i] += bit[pos][i];
        }
        pos -= pos & (-pos);
    }
    pos = l - 1;
    while (pos > 0)
    {
        for (int i = 0; i < 32; i++)
        {
            bits[i] -= bit[pos][i];
        }
        pos -= pos & (-pos);
    }
    ll res = 0;
    for (int i = 0; i < 32; i++)
    {
        res += (1 << i) * ((bits[i]) * (r - l + 1) + (bits[i]) * ((r - l + 1) - bits[i]));
    }
    res = (res - add(l, r)) / 2;
    return res;
}

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        update(i, ar[i], 0);
        update1(i, ar[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            update(b, c, ar[b]);
            update1(b, c - ar[b]);
            ar[b] = c;
        }
        else if (a == 2)
        {
            cout << OR(b, c) << '\n';
        }
        else if (a == 3)
        {
            cout << AND(b, c) << '\n';
        }
        else if (a == 4)
        {
            cout << XOR(b, c) << '\n';
        }
    }

    return 0;
}