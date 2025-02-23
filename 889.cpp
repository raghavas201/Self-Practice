// LEETCODE POTD 23-02-2025
// LEETCODE PROBLEM NUMBER 889
// Construct Binary Tree from Preorder and Postorder Traversal
// TOPICS Array, Hash-Table, Divide and Conquer, Tree, Binary Tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int pre_idx=0;
    int post_idx=0;
public:
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        TreeNode* curr=new TreeNode(preorder[pre_idx]);
        pre_idx++;

        if(curr->val!=postorder[post_idx])
            curr->left=constructFromPrePost(preorder,postorder);
        if(curr->val!=postorder[post_idx])
            curr->right=constructFromPrePost(preorder,postorder);

        post_idx++;
        return curr;
    }
};



// This code constructs a binary tree from its preorder and postorder traversal sequences.
// It recursively creates nodes using the `preorder`
// list and assigns left and right children until the current node matches the `postorder` value,
// indicating that its subtree is complete. The `pre_idx` tracks the preorder index,
// while `post_idx` tracks the postorder index to determine subtree boundaries.