class Solution {
public:
void nthlevel(TreeNode* root,int curr,int level,vector<int>& v){
    if(root==NULL) return;
    if(curr==level){ 
        v.push_back(root->val);
        return;
    }
    nthlevel(root->left,curr+1,level,v);
    nthlevel(root->right,curr+1,level,v);
}
int levels(TreeNode* root){
    if(root==NULL) return 0;
    int lmax=levels(root->left);
    int rmax=levels(root->right);
    return 1 + max(lmax,rmax);
}
void lorder(TreeNode* root,vector<vector<int>>& ans){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        vector<int> v;
        nthlevel(root,1,i,v);
        ans.push_back(v);
        cout<<endl; 
    }
}

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lorder(root,ans);
        return ans;
    }
};