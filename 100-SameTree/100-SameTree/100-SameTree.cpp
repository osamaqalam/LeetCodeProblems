// 100-SameTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if ((p == nullptr)  ^ (q == nullptr)) return false; // XOR 
        if ((p == nullptr) && (q == nullptr)) return true;
        if (p->left == nullptr && p->right == nullptr &&
            q->left == nullptr && q->right == nullptr)
            return p->val == q->val;

        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};

int main()
{
    
    TreeNode* c = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* p = new TreeNode(1,c,b);

    TreeNode* d = new TreeNode(2);
    TreeNode* e = new TreeNode(3);
    TreeNode* q = new TreeNode(1, d, e);

    Solution obj;

    cout << obj.isSameTree(p, q);
}

