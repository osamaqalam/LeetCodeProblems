// 108-ArrToBinTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTRecursive(nums, 0, nums.size()-1);
    }

    TreeNode* sortedArrayToBSTRecursive(vector<int>& nums, int l, int r)
    {
        if (l > r) return nullptr;

        int m = (l + r) / 2;

        return new TreeNode(nums.at(m), sortedArrayToBSTRecursive(nums, l, m - 1), sortedArrayToBSTRecursive(nums, m + 1, r));
    }
};

int main()
{
    Solution obj;
    vector<int> nums = { -10,-3,0,5,9 };
    TreeNode* res = obj.sortedArrayToBST(nums);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
