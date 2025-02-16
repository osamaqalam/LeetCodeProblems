// 113-PathSumII.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> curList;
        vector<vector<int>> result;
        dfs(root, targetSum, curList, result);

        return result;

    }

    void dfs (TreeNode* root, int targetSum, vector<int>& curList, vector<vector<int>>& result)
    {
        if (!root) return;

        curList.push_back(root->val);
        targetSum -= root->val;

        // Handle leaf node that clears the target sum
        if (!root->left && !root->right && targetSum == 0)
        {
            result.push_back(curList);
        }
              
        dfs(root->left, targetSum, curList, result);
        dfs(root->right, targetSum, curList, result);

        curList.pop_back();
    }
};

int main()
{
    std::cout << "Hello World!\n";
}