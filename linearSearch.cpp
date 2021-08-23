class Solution {
public:
    int foundElement(vector<int>&arr,int target)
    {
            int ans;
            for(int i=0;i<arr.size();i++)
            {
                    if(arr[i]==target)
                    {
                            ans=i;
                    }
                    
            }
            return ans;
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
            int target=arr[0];
           
            for(int i=0;i<arr.size();i++)
            {
                    if(arr[i]>target)
                    {
                            target=arr[i];
                    }
            }
            return foundElement(arr,target);
    }
};
