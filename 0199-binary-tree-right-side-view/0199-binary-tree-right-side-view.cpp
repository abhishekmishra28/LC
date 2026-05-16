class Solution {
public:
    void solve(TreeNode* root, int l, vector<int> &ans){
        if(!root) return;
        if(ans.size()<=l) ans.push_back(root->val);
        if(root->right) solve(root->right,l+1,ans);
        if(root->left) solve(root->left,l+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        solve(root,0,ans);
        return ans;
    }
};