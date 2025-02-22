// 110-BalancedTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        int depth;

        return helper(root, depth);
    }

    bool helper(TreeNode* root, int& depth)
    {
        // leaf node
        if (!root->left && !root->right) {
            depth = 1;
            return true;
        }

        int leftDepth;
        int rightDepth;

        bool leftBalanced  = helper(root->left, leftDepth);
        bool rightBalanced = helper(root->right, rightDepth);
        depth = max(leftDepth, rightDepth)+1;

        return leftBalanced && rightBalanced && abs(leftDepth - rightDepth) <= 1;

    }
};

int main()
{
    std::cout << "Hello World!\n";
}

