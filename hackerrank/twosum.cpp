#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> col;
        for(int i = 0;i<nums.size();i++)
        {
            std::unordered_map<int,int>::const_iterator got = col.find (nums[i]);
            if(got == col.end())
            {
                col[target - nums[i]] = i;
            }
            else
            {
                std::vector<int> bob(2);
                bob[0] = col[nums[i]];
                bob[1] = i;
                return bob;
            }
        }
        
    }
};
