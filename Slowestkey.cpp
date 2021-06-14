class Solution {
public:
    char slowestKey(vector<int>& v, string s) {
        char ans=s[0];
        int t=v[0];
        for(int i=1;i<s.size();i++){
                int d= v[i]-v[i-1];
                if(d==t){
                        ans=max(ans,s[i]);
                }
                if(d>t){
                       ans=s[i]; 
                        t=d;
                }
        }
            return ans;
    }
};
