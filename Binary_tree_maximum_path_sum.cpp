class Solution {
public:
    int maxHeightSum(TreeNode* root,int &maxi)
    {
            if(root==NULL)return 0;
            int lf=max(0,maxHeightSum(root->left,maxi));
            int rf=max(0,maxHeightSum(root->right,maxi));
            maxi=max(maxi,lf+rf+root->val);
            return max(lf,rf)+root->val;
                  
    }
    int maxPathSum(TreeNode* root) 
    {
            int maxi=INT_MIN;
            maxHeightSum(root,maxi);
            return maxi;
    }
};
