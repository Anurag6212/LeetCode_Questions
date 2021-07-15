class Solution {
public:
    int mySqrt(int x) 
    {
            long i=0;
            for(;i<=x;i++)
            {
                  if(i*i>x)
                    {
                            i=i-1;
                            break;
                    }
                    else if(i*i==x)
                    {
                            break;
                    }
            }
            return i;
    }
};
