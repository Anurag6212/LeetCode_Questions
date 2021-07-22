class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
            int count=0;
            int cardinals=0;
            if(count==0)
            for(auto num:nums)
            {
                    if(count==0)
                    {
                            cardinals=num;
                    }
                    if(num==cardinals)
                    {
                            count++;
                    }
                    else
                    {
                            count--;
                    }
            }
            return cardinals;
    }
};
