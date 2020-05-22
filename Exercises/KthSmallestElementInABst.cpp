#include "TreeNode.h"
#include <vector>


class Solution
{
public:
	int kthSmallest(TreeNode* root, int k)
	{
		std::vector<int> vSmallest;
		Smallestkth(root, k, vSmallest);
		return vSmallest[k - 1];
	}

	void Smallestkth(TreeNode* root, int k, std::vector<int>& vSmallest)
	{
		if (root->left) Smallestkth(root->left, k, vSmallest);
		vSmallest.push_back(root->val);
		if (root->right) Smallestkth(root->right, k, vSmallest);
	}
};
