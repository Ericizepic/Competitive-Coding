#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define pi pair<int, int>
typedef unsigned long long ull;
typedef vector<int> vi;

int t, n, a, b, best, curr, x, y, ra, pa, rb, pb, T, c, d, m;
string s;
vi adj[200001];
vi temp[200001];
int pop[200001];
int access[200001];

void merge(int leaf, int pop)
{
    //cout << leaf <<" "<< pop<< '\n';
    for (int i = 0; i < temp[leaf].size(); i++)
    {
        access[temp[leaf][i]] += pop;
        merge(temp[leaf][i], pop);
    }
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int temp = 0;
        while (temp <a)
        {
            for (int j = temp; j < temp + b; j++)
            {
                if (j > a - 1)
                {
                    break;
                }
                cout << "a";
            }
            temp += b;
            for (int j = temp; j < temp + b; j++)
            {
                if (j > a - 1)
                {
                    break;
                }
                cout << "b";
            }
            temp += b;
            for (int j = temp; j < temp + b; j++)
            {
                if (j > a - 1)
                {
                    break;
                }
                cout << "c";
            }
            temp += b;
        }
        cout << '\n';
    }
    return 0;
}