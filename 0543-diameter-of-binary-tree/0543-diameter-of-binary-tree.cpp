class Solution {
public:
    int levels(TreeNode* root){
    if(root==NULL) return 0;
    int lmax=levels(root->left);
    int rmax=levels(root->right);
    return (1 + max(lmax,rmax));
    }
    void helper(TreeNode* root,int &maxdia){
        if(root==NULL) return;
        int dia=levels(root->left) + levels(root->right);
        maxdia=max(maxdia,dia);
        helper(root->left,maxdia);
        helper(root->right,maxdia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxdia=0;
        helper(root,maxdia);
        return maxdia;
    }
};