class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) 
    {
            int ar[26];
            memset(ar,-1,sizeof ar);
            int ans=-1;
            for(int i=0;i<s.size();i++)
            {
                    if(ar[s[i]-'a']==-1)
                    {
                            ar[s[i]-'a']=i;
                    }
                    int op=i-ar[s[i]-'a']-1;
                    ans=max(ans,op);
            }
            return ans;
   
    }
};
