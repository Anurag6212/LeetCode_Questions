class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
              vector<int> map(1001, 0);
    
    vector<int> ans;
    
    for (int i = 0; i < arr1.size(); i++)
        map[arr1[i]]++;
    
  
    for (auto a : arr2) 
        while (map[a]){        
            ans.push_back(a);
            map[a]--;
        }
    
    for (int i = 0; i <= 1000; i++) 
        while(map[i]--)
            ans.push_back(i);
    
    return ans;
    
}
    
};
