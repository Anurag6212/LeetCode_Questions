class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
            if(nums.size()<3)return 0;
            sort(nums.begin(),nums.end());
            int closest=nums[0]+nums[1]+nums[2];
            for(int first=0;first<nums.size()-2;first++)
            {
                    if(first>0 && nums[first]==nums[first-1])continue;
                    int second=first+1;
                    int last=nums.size()-1;
                    while(second<last)
                    {
                            int currSum=nums[first]+nums[second]+nums[last];
                            if(currSum==target)return currSum;
                            if(abs(target-currSum)<abs(target-closest))
                            {
                                    closest=currSum;
                            }
                            if(currSum>target)
                            {
                                    last--;
                            }
                            else
                            {
                                    second++;
                            }
                    }
            }
            return closest;
            
            
    }
};
