#include <iostream>
#include <vector>
#include <string> // Add this include

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
    vector<string> result;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root, "");
        return result;
    }

    void dfs(TreeNode* root, string currentPath)
    {
        if (currentPath.length() == 0)
            currentPath = to_string(root->val);
        else
            currentPath += "->" + to_string(root->val);

        // Add current path to result vector if leaf node
        if (!root->left && !root->right)
        {
            result.push_back(currentPath);
            return;
        }

        if (root->left)
            dfs(root->left, currentPath);
        if (root->right)
            dfs(root->right, currentPath);
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
