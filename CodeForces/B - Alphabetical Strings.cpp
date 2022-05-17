#include <bits/stdc++.h>


typedef unsigned long long ll;

using namespace std;

int ar[1000];
int n,m,k;
string s;
bool can;


int main()
{
    cin >> n;
    can = true;
    int left, right;

    for (int i = 0; i<n; i++){
        cin >> s;
        left = 0;
        right = s.length()-1;
        can = true;
        for (int j = s.length(); j>=1; j--){
            if (s[left]==(char)(j+96))
                left++;
            else if(s[right]==(char)(j+96))
                right--;  
            else{
                can = false;
                break;
            }
        }
        if (can)
        cout << "YES" <<'\n';
        else
        cout << "NO" <<'\n';
    }

    return 0;
}