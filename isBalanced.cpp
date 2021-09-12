class Solution {
public:
    int dfsHeight(TreeNode* root)
    {
            if(root==NULL)return 0;
            int lf=dfsHeight(root->left);
            if(lf==-1)return -1;
            int rf=dfsHeight(root->right);
            if(rf==-1)return -1;
            
            if(abs(lf-rf)>1)return -1;
            return max(lf,rf)+1;
    }
    bool isBalanced(TreeNode* root) 
    {
            return dfsHeight(root) != -1;
    }
        
};
