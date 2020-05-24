#include "ConstructBinarySearchTreeFromPreorderTraversal.cpp"
#include "catch.hpp"


TEST_CASE("Construct Binary Search Tree from Preorder Traversal, Example 1", "[LeetCode]")
{
	Solution s;
	std::vector<int> preorder{ 8,5,1,7,10,12 };
	TreeNode* root = s.bstFromPreorder(preorder);

	REQUIRE(root != nullptr);
	REQUIRE(root->right != nullptr);
	REQUIRE(root->right->right->val == 12);
}
