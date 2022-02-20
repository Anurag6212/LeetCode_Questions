class Solution
{
private:
    void getSum(int ind,int sum,vector<int>&ans,vector<int> &arr,int N){
        if(ind==N){
            ans.push_back(sum);
            return;
        }
        //pick
        getSum(ind+1,sum+ arr[ind],ans,arr,N);
        //non-pick
        getSum(ind+1,sum,ans,arr,N);
        
    }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum=0;
        vector<int>ans;
        getSum(0,sum,ans,arr,N);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
