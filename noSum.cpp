class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
            int noItem=0;
            int i;
            if(ruleKey=="type")i=0;
            if(ruleKey=="color")i=1;
            if(ruleKey=="name")i=2;
            
            for(int j=0;j<items.size();j++)
            {
                    if(ruleValue==items[j][i])
                    {
                            noItem++;
                    }
            }
            return noItem++;
    }
};
