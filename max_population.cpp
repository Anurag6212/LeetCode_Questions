class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) 
    {
            int v[101]={0};
            for(auto a:logs)
            {
                    v[a[0]-1950]+=1;
                    v[a[1]-1950]-=1;
            }
            int max=0,year=0,cnt=0;
            for(int i=0;i<101;i++)
            {
                    cnt+=v[i];
                    if(cnt>max)max=cnt,year=i;
                            
            }
            return year+1950;
    }
};
