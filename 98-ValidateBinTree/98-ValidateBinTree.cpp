// 98-ValidateBinTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    bool isValidBST(TreeNode* root) {
        if (!root || (!root->left && !root->right)) return true;

        return helper(root, INT_MIN+1, INT_MAX+1);
    }

    bool helper(TreeNode* root, int left, int right)
    {
        if (!root) return true;
        if (!(root->val > left && root->val < right)) return false;

        return helper(root->left, left, root->val)
            && helper(root->right, root->val, right);

    }
};

int main()
{
    std::cout << "Hello World!\n";
}
