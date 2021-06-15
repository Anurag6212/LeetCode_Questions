class Solution {
public:
        void help(TreeNode* root)
        {
                if(root==NULL) return ;
                help(root->left);
                help(root->right);
                auto temp=root->left;
                root->left= root->right;
                root->right=temp;
        }
    TreeNode* invertTree(TreeNode* root) 
    {
            help(root);
            return root;
        
    }
};
