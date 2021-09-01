class Solution {
public:
    int arrangeCoins(int n) 
    {
            long long num=n;
            long long st=1;
            long long ed=n;
            while(st<=ed)
            {
                    long long mid=st+(ed-st)/2;
                    if(mid*(mid+1)<=2*num)
                    {
                            st=mid+1;
                    }
                    else ed=mid-1;
            }
            return st-1;
    }
};
