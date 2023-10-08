#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <streambuf>
#include <string>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int smallestFactor(int n)
{
    for (int j = 2; j*j<= n; j++)
    {
        if (n%j == 0)
            return j;
    }
    return n;
}

int main()
{
    int n, t, temp;
    cin >> t;
    for (int i = 1; i<=t; i++)
    {  
        cin >> n;
        vector<int> v;
        int sum = 0;

        while (n != 1)
        {
            temp = smallestFactor(n);
            sum += temp;
            v.push_back(temp);
            n /= temp;
        }

        if (sum > 41)
        {
            cout << "Case #" << i <<": " << -1 << endl;
        }
        else
        {
            for (int j = sum; j< 41; j++)
            {
                v.push_back(1);
            }

            cout << "Case #" << i <<": " << v.size() << " ";
            for (int j = 0; j<v.size(); j++)
            {
                cout << v[j] << " ";
            }
        }
    }
}