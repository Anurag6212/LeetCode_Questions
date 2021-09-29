class Solution {
public:
    int numberOfSteps(int num,int ans=0) 
    {
            /*
            int count=0;
            while(num>0)
            {
                     if(num%2==0)
                     {
                             num=num/2;
                             count++;
                     }
                    if(num%2!=0)
                    {
                            num=num-1;
                            count++;
                    }
            }
            return count;
            */
            if(num>0)
            {
                    if(num%2==0)
                    {
                         return numberOfSteps(num/2,ans+1);
                    }
                    else 
                    {
                            return numberOfSteps(num-1,ans+1);
                    }
            }
            return ans;
    }
};
