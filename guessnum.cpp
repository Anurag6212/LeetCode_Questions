class Solution {
public:
    int guessNumber(int n) 
    {
            int i=1;
            int j=n;
            while(true)
            {
                    int mean=i+(j-i)/2;
                    int ans=guess(mean);
                    if(ans==0)return mean;
                    else if(ans==1)i=mean+1;
                    else j=mean-1;
                            
            }
                    
                    
    }
};
