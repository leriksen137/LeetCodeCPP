#include "TreeNode.h"
#include <vector>


class Solution
{
public:
    TreeNode* bstFromPreorder(std::vector<int>& preorder)
    {
        if (preorder.size() == 0) return nullptr;

        TreeNode* node = new TreeNode(preorder[0]);

        std::vector<int> leftPreorder, rightPreorder;
        splitPreorder(preorder, leftPreorder, rightPreorder);

        node->left = bstFromPreorder(leftPreorder);
        node->right = bstFromPreorder(rightPreorder);

        return node;
    }
private:
    void splitPreorder(std::vector<int>& preorder, std::vector<int>& leftPreorder, std::vector<int>& rightPreorder)
    {
        const int splitter = preorder[0];
        for (const int& p : preorder)
        {
            if (p < splitter) leftPreorder.push_back(p);
            else if (p > splitter) rightPreorder.push_back(p);
        }
        preorder.clear();
    }

};