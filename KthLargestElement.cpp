class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
            int kThNum=0;
            sort(nums.begin(),nums.end());
            for(int i=nums.size()-1;i>=0;i--)
            {
                  k--;
                  if(k<1)
                  {
                          kThNum+=nums[i];
                          break;
                  }
            }
            return kThNum;
    }
};
