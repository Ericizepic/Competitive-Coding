#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef unsigned long long ull;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;

int num[200002];
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        //vi adj[n+1];
        vector<pair<ull, int>> weight;
        ull count = 0;
        int temp;
        weight.push_back({0, 0});

        for (int j = 1; j <= n; j++)
        {
            cin >> temp;
            count += temp;
            weight.push_back({temp, 0});
        }
        for (int j = 0; j < n - 1; j++)
        {
            cin >> a >> b;
            weight[a].second = weight[a].second + 1;
            weight[b].second = weight[b].second + 1;
        }
        sort(weight.begin(), weight.end());
        cout << count << " ";
        temp = n;
        for (int j = 1; j < n - 1; j++)
        {
            while (weight[temp].second == 1)
            {
                temp--;
            }
            count += weight[temp].first;
            weight[temp].second = weight[temp].second - 1;
            cout << count << " ";
        }
        cout << '\n';
    }
    return 0;
}