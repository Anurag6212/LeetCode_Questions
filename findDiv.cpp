class Solution {
public:
    int findDiv(vector<int>& nums,int hi)
    {
            int sum=0;
            for(int i=0;i<nums.size();i++)
            {
                    sum+=(nums[i]/hi);
                    if(nums[i]%hi!=0)
                    {
                            sum+=1;
                    }
                    
            }
            return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
            int lo=1;
            int hi=*max_element(nums.begin(),nums.end());
            int ans=1;
            while(lo<=hi)
            {
                    int mid=lo+(hi-lo)/2;
                    if(findDiv(nums,mid)<=threshold)
                    {
                            ans=mid;
                            hi=mid-1;
                    }
                    else
                    {
                            lo=mid+1;
                    }
            }
            return ans;
    }
};
