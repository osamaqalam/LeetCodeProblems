// 112-PathSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        
        // Leaf node
        if (!root->left && !root->right)
        {
            if (targetSum - root->val == 0) return true;
            else return false;
        }

        return hasPathSum(root->left, targetSum - root->val)
            || hasPathSum(root->right, targetSum - root->val);
    } 
};

int main()
{
    std::cout << "Hello World!\n";
}
