int numIdenticalPairs(vector<int>& A) {
        int res = 0;
        unordered_map<int, int> count;
        for (int a: A) {
            res += count[a]++;
        }
        return res;
    }

//Worst time complexity


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
            int n=nums.size();
            int count=0;
            //unordered_map<int,int>mp;
            for(int i=0;i<n;i++)
            {
                    for(int j=i+1;j<n;j++)
                    {
                            if(nums[i]==nums[j] && i<j)
                            {
                                    count++;
                            }
                    }
            }
            return count;
    }
};
