class Solution {
public:
    void solve(TreeNode* root, int k, int &c,int &res){
        if(!root) return;
        solve(root->left,k,c,res);
        c++;
        if(c==k){
            res = root->val;
            return;
        }
        solve(root->right,k,c,res);
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        int res;
        solve(root,k,cnt,res);
        return res;
    }
};