#include "InvertBinaryTree.cpp"
#include "catch.hpp"


TEST_CASE("Invert Binary Tree, Example 1", "[LeetCode]")
{
	Solution s;
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n6 = new TreeNode(6);
	TreeNode* n9 = new TreeNode(9);
	TreeNode* n2 = new TreeNode(2, n1, n3);
	TreeNode* n7 = new TreeNode(7, n6, n9);
	TreeNode* root = new TreeNode(4, n2, n7);

	root = s.invertTree(root);
	
	REQUIRE(root != nullptr);
	REQUIRE(root->right->left->val == 3);
}
