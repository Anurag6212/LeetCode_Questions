class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
            int st=0;
            int ed=nums.size()-1;
            while(st<ed)
            {
                    int mid=st+(ed-st)/2;
                    if((mid%2==0 && nums[mid]==nums[mid+1]) || (mid%2==1 && nums[mid]==nums[mid-1]))
                    {
                            st=mid+1;
                    }
                    else 
                    {
                            ed=mid;
                    }
            }
            return nums[st];

    }
};
