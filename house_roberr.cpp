#include <iostream>
#include <vector>

using namespace std;

class Solution
{
    public:

    int rob(vector<int>& nums)
    {

        if(nums.empty())
        {
            return 0;
        }

        if(nums.size() == 1)
        {
            return nums[0];
        }

        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1]= max(nums[0],nums[1]);
     
        for(size_t j = 2; j < nums.size();j ++)
        {
            dp[j]=max(dp[j-1], dp[j-2] + nums[j]);
        }
        
        return dp[nums.size()-1];  
    }
};

int main() 
{

    Solution s1;
   
    vector<int> nums1 ={1,2,3,1};
    cout<<" Example 1 output: "<<s1.rob(nums1)<<endl;

    vector<int> nums2 = {2,7,9,3,1};
    cout<<" Example 2 output: "<<s1.rob(nums2)<<endl;

    vector<int> nums3= {1,2};
    cout<<" Example 3 output: "<<s1.rob(nums3)<<endl;

    vector<int> nums4= {1};
    cout<<" Example 4 output: "<<s1.rob(nums4)<<endl;

}