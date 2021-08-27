class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
            vector<int>ans;
            int n=nums.size();
            for(int i=0;i<2*n;i++)
            {
                    int rem=i%n;
                    ans.emplace_back(nums[rem]);
            }
            return ans;
    }
};
