#include "TreeNode.h"


class Solution
{
public:
	int kthSmallest(TreeNode* root, int k)
	{
		this->result = 0;
		this->k = k;
		this->count = 0;

		kthSmallestRecursive(root);
		return result;
	}

	void kthSmallestRecursive(TreeNode* root)
	{
		if (root == nullptr) return;
		if (count >= k) return;
		kthSmallestRecursive(root->left);
		count++;
		if (k == count)
		{
			result = root->val;
			return;
		}
		kthSmallestRecursive(root->right);
		return;

	}

	int count{ 0 };
	int result{ 0 };
	int k{ 0 };
};
