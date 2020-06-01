#ifndef TreeNode_h__
#define TreeNode_h__

#include <string>
#include <iostream>


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

    friend std::ostream& operator<<(std::ostream& os, const TreeNode& root);
};

#endif // TreeNode_h__
