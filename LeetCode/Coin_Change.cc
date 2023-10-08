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

class Solution {
public:
    map<int, int> dp;
    int coinChange(vector<int>& coins, int amount) {
        int minDenom = INFINITY;



        

        cout << dp.size() << endl;
        return 0;
    }
};


int main()
{
    Solution* s = new Solution();
    vector<int> v = {1,2,3};
    s->coinChange(v, 4);
}