class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
            set<int>hashset;
            for(int num: nums)
            {
                    hashset.insert(num);
            }
            int longeststack=0;
            for(int num: nums)
            {
                    if(!hashset.count(num-1))
                    {
                            int current_num = num;
                            int current_stack=1;
                            while(hashset.count(current_num+1))
                            {
                                    current_num+=1;
                                    current_stack+=1;
                            }
                            longeststack = max(longeststack,current_stack);
                    }
            }
            return longeststack;
    }
};
