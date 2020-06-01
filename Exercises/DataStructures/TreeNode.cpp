#include "TreeNode.h"

std::ostream& operator<< (std::ostream& os, const TreeNode& root)
{
    return os;
}
/*/
{
    if (root == nullptr) return os;
    os << root->val << " ";
    os << root->left;
    os << root->right;
    return os;
}*/
