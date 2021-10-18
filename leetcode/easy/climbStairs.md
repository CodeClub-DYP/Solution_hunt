Problem: [Link](https://leetcode.com/problems/climbing-stairs/)

Author: [@yashladekar](https://github.com/yashladekar)

```C++
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     /*
    the solution of this from is based on the concept of the fibonacci number
    let us concider that the person is moving down the staires
    each round you can choose 1 step or 2 steps
    thus, f(x) = f(x-1) + f(x-2)
    initial condition: f(1) = 1 and f(2) = 2
    hence, f(3) = f(2) + f(1) = 3
    f(4) = f(3) + f(2) = 3 +2 =5
    Therefore, the serie is like: 1, 2, 3, 5, 8, 13, ....
    */
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
```
