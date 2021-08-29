class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
            vector<int>ans;
            int i=0;
            while(i<nums.size())
            {
                    int current=nums[i]-1;
                    if(nums[i]!=nums[current])
                    {
                            swap(nums[i],nums[current]);
                    }
                    else
                    {
                            i++;
                    }
            }
            for(int i=0;i<nums.size();i++)
            {
                    if(nums[i]!=i+1)
                    {
                            ans.push_back(nums[i]);
                            ans.push_back(i+1);
                    }
                    
            }
            return ans;
            
    }
};
