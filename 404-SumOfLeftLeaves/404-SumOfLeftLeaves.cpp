// 404-SumOfLeftLeaves.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        dfs(root, sum, false);
        return sum;
    }

    void dfs(TreeNode* root, int& sum, bool isLeftChild)
    {
        if (!root->left && !root->right && isLeftChild)
        {
            sum += root->val;
            return;
        }

        if (root->left)
            dfs(root->left, sum, true);
        if (root->right)
            dfs(root->right, sum, false);
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

