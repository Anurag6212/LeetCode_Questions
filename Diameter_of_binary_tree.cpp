class Solution {
public:
    int height(TreeNode* node,int &diameter)
    {
            if(!node)return 0;
            
            int lf=height(node->left,diameter);
            int rf=height(node->right,diameter);
            
            diameter=max(diameter,lf+rf);
            return max(lf,rf)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
            int diameter=0;
            height(root,diameter);
            return diameter;
    }
};
