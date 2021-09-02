class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
            long long st=0;
            long long ed=nums.size()-1;
            while(st<=ed)
            {
                    long long mid=st+(ed-st)/2;
                    if(nums[mid]>target)
                    {
                            ed=mid-1;
                    }
                    else if(nums[mid]<target)
                    {
                            st=mid+1;
                    }
                    else return mid;
            }
            return -1;
    }
};
