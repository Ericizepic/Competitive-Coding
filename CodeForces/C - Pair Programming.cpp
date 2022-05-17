#include <bits/stdc++.h>
#include <vector>

typedef unsigned long long ll;

using namespace std;

int n,m,k, x,y, z;
bool can;


int main()
{
    cin >> z;
    for (int i = 0; i<z; i++){
        cin >> k >> n >> m;
        vector <int> a,b, ans;
        for (int j = 0; j<n; j++){
            cin >> x;
            a.push_back(x);
        }
        for (int j = 0; j<m; j++){
            cin >> x;
            b.push_back(x);
        }
        x = 0;
        y = 0;
        can = true;
        for (int j = 0; j< m + n; j++)
        {
            if (a[x]==0 && x<n){
            ans.push_back(0);
            x++;
            k++;
            }
            else if (b[y]==0 && y<m){
            ans.push_back(0);
            y++;
            k++;
            }
            else{
                if (a[x] <= k && x<n)
                {
                ans.push_back(a[x]);
                                x++;

                }
                else if (b[y] <= k && y<m){
                    ans.push_back(b[y]);
                                        y++;
                }
                else{
                    can = false;
                    break;
                }
            }
        }

        if (can){
            for (int j = 0; j<m+n; j++){
             cout << ans[j] << " ";
            }
            cout << '\n';
        }
        else{
            cout << -1 << '\n'; 
       }
    }
    return 0;
}