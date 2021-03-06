class Solution {
public:
    int splitArray(vector<int>& nums, int m) 
    {
            int start =0;
            int end =0;
            for(int i=0;i<nums.size();i++)
            {
                    start=max(start,nums[i]);
                    end+=nums[i];
            }
            while(start < end)
            {
                    int mid=start+(end-start)/2;
                    int sum=0;
                    int piece=1;
                    for(int num : nums)
                    {
                            if((sum+num) > mid)
                            {
                                    sum=num;
                                    piece++;
                            }
                            else 
                            {
                                    sum+=num;
                            }
                    }
                    if(piece > m)
                    {
                            start=mid+1;
                    }
                    else 
                    {
                            end=mid;
                    }
            }
            return end;
    }
};
