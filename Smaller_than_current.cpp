//Worst time and space complexity
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
            int n=nums.size();
            vector<int>ans;
            for(int i=0;i<n;i++)
            {
                    int count=0;
                    for(int j=0;j<n;j++)
                    {
                            if(j!=i and nums[j]<nums[i])
                                    count++;
                    }
             ans.push_back(count);       
            }
            //ans.push_back(count);
            return ans;
    }
};



vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (map.find(arr[i]) == map.end()) {
                map[arr[i]] = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = map[nums[i]];
        }
        return nums;
    }
