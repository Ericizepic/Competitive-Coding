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
    bool canJump(vector<int>& nums) {
        int n = nums.size(), current_index = 0, checked = 0;
        while (true)
        {
            int best = 0, next_index = current_index;
            for (int i = checked; i <= current_index + nums[current_index]; i++)
            {
                if (i >= n - 1)
                    return true;
                
                if (i + nums[i] > best)
                {
                    best = i + nums[i];
                    next_index = i;
                }
            }

            if (next_index == current_index)
                return false;

            checked = current_index + nums[current_index] + 1;
            current_index = next_index;
        }
        return true;
    }
};


int main()
{
    Solution* s = new Solution();
    vector<int> v = {5,9,3,2,1,0,2,3,3,1,0,0};
    cout << s->canJump(v) << endl;
}