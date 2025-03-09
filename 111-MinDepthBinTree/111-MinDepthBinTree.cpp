// 111-MinDepthBinTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        if (!root->left && !root->right) return 1;

        int minimum = INT_MAX;

        if (root->left) minimum = min(minimum, minDepth(root->left) + 1);
        if (root->right) minimum = min(minimum, minDepth(root->right) + 1);

        return minimum;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
