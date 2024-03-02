#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution 
{
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();

        if (n==2)
        {
            return min(cost[0],cost[1]);
        }

        vector<int> dp(n,0);
        dp[0]=cost[0];
        dp[1]=cost[1];
    
        for(int i =2; i<n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1] ,dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};


int main()
{
    
    Solution s1;
    vector<int> cost1 = {10, 15, 20};
    cout << "Example 1 Output: "<< s1.minCostClimbingStairs(cost1);

    vector<int> cost2 = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << "Example 2 Output: " << s1.minCostClimbingStairs(cost2) << endl;



}
