// 94-BinTreeInorderTrav.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        vector<int> left;
        vector<int> right;

        if (!root) return result;
       
        left = inorderTraversal(root->left);
        right = inorderTraversal(root->right);

        for (int i : left) result.push_back(i);
        result.push_back(root->val);
        for (int i : right) result.push_back(i);
        
        return result;
    }
};
int main()
{
}
