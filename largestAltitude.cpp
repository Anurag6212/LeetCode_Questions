class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
            int temp=0;
            int mx=INT_MIN;
            for(int i=0;i<gain.size();i++)
            {
                    temp+=gain[i];
                    mx=max(temp,mx);
            }
            if(mx<0)
            {
                    mx=0;
            }
            return mx;
    }
};
