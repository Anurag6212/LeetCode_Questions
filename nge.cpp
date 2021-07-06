class Solution {
public:
        stack<int>st;
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        vector<int>ans(n1.size(),-1);
            unordered_map<int,int>umap;
            for(int i=0;i<n2.size();i++)
            {    
                    int ele=n2[i];
                    while(!st.empty() && (ele > st.top()))
                    {
                            umap[st.top()] = ele;
                            st.pop();
                    }
                    st.push(ele);
            }
            for(int i=0;i<n1.size();i++)
            {
                    int ele = n1[i];
                    if(umap.find(ele)!=umap.end())
                    {
                            int nge =umap[ele];
                            ans[i] = nge;
                    }
            }
            return ans;
    }
};
