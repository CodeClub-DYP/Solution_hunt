#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int climbStairs(int n)
    {
        int previous = 2, previous2 = 1;
        int res = 0;
        if (n <= 2)
            return n;
        for (int i = 3; i <= n; i++)
        {
            res = previous2 + previous;
            previous2 = previous;
            previous = res;
        }
        return res;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.climbStairs(n);
    return 0;
}