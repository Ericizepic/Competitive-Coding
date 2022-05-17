#include <bits/stdc++.h>

using namespace std;

int k, n, a, b, temp, curr, t;

int ar[26];

int main()
{
    cin >> t;
    string s;

    for (int j = 0; j < t; j++)
    {
        vector<pair<int, int>> v;
        cin >> s;
        n = s.length();
        k = -1;
        for (int i = 0; i < 26; i++)
        {
            ar[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            ar[s[i] - 'a']++;
            k = max(k, ar[s[i] - 'a']);
            v.push_back({s[i] - 'a', i});
        }
        if (k > n / 2)
        {
            cout << "Case #" << j+1 <<": IMPOSSIBLE" << '\n';
        }
        else
        {
            sort(v.begin(), v.end());
            string ans = "";
            for (int i = 0; i<n; i++){
                for (int l = 0; l<n; l++){
                    if (v[l].second==i){
                        ans+=(char)(v[(l+k)%n].first+'a');
                    }
                }
            }
            cout << "Case #" << j+1 <<": " << ans << '\n';
        }
    }
    return 0;
}