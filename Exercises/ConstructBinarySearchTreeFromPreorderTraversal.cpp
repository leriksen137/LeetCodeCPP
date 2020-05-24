#include "TreeNode.h"
#include <vector>


class Solution
{
public:
    TreeNode* bstFromPreorder(std::vector<int>& preorder)
    {
        size_t startIdx{ 0 };
        return bstHelper(preorder, startIdx);
    }

    TreeNode* bstHelper(std::vector<int>& preorder, size_t& i)
    {
        if (i == preorder.size()) return nullptr;
        TreeNode* node = new TreeNode(preorder[i]);
        i++;

        if (i == preorder.size()) return node;
        if (preorder[i] < node->val)
        {
            node->left = bstHelper(preorder, i);
        }
        
        if (i == preorder.size()) return node;
        if (preorder[i] > node->val)
        {
            node->right = bstHelper(preorder, i);
        }
        return node;
    }
};