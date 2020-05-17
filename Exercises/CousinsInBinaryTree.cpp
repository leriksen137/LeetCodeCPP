#include "TreeNode.h"

class Solution
{
public:
	bool isCousins(TreeNode* root, int x, int y)
	{
		bool sameLevel = (getLevel(root, x) == getLevel(root, y));
		bool sameParent = (getParent(root, x) == getParent(root, y));

		TreeNode* xParent = getParent(root, x);
		TreeNode* yParent = getParent(root, y);

		return (sameLevel && !sameParent);
	}

private:
	int getLevel(const TreeNode* root, const int& v)
	{
		return getLevelHelper(root, v, 0);;
	}

	int getLevelHelper(const TreeNode* node, const int& v, const int& currentLevel)
	{
		if (node->val == v) return currentLevel;
		int leftResult{ 0 };
		int rightResult{ 0 };
		if (node->left) leftResult = getLevelHelper(node->left, v, currentLevel + 1);
		if (node->right) rightResult = getLevelHelper(node->right, v, currentLevel + 1);
		return std::max(leftResult, rightResult);
	}

	TreeNode* getParent(TreeNode* root, const int& v)
	{
		TreeNode* leftResult{ nullptr };
		TreeNode* rightResult{ nullptr };
		if (root->left)
		{
			if (root->left->val == v)
			{
				return root;
			}
			leftResult = getParent(root->left, v);
		}
		if (root->right)
		{
			if (root->right->val == v)
			{
				return root;
			}
			rightResult = getParent(root->right, v);
		}
		if (leftResult) return leftResult;
		if (rightResult) return rightResult;
		return nullptr;
	}
};
