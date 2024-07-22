class Solution {
public:
    int ans;
    Solution() : ans(0) {}
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==nullptr)
        return 0;

        if(root->val >= low && root->val <= high ) 
        ans = root->val + ans;
        
        if(root->val > low)
        rangeSumBST(root->left, low, high);

        if(root->val < high)
        rangeSumBST(root->right, low, high);

        return ans;
        
    }
   
};