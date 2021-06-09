class Solution {
public:
    bool isHappy(int n) {
            int ans=0;
            while(n){
                    int temp=n%10;
                    ans+=(temp*temp);
                    n/=10;
            }
            return ans;
    }
        bool ishapppy(int n){
                int slow=n,fast=n;
                do{
                        slow=isHappy(slow);
                        fast=isHappy(isHappy(fast));
                }
                while(slow!=fast);
                    return slow==1;
        }
};
