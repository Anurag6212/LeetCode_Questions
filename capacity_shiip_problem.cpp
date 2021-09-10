class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
            int left=0;
            int right=0;
            for(int w:weights)
            {
                    left=max(left,w);
                    right+=w;
            }
            while(left<right)
            {
                    int mid=(left+right)/2,need=1,curr=0;
                    for(int w:weights)
                    {
                            if(curr+w>mid)
                            {
                                    need+=1;
                                    curr=0;
                            }
                            curr+=w;
                    }
                    if(need>days)left=mid+1;
                    else right=mid;
            }
            return left;
    }
};
