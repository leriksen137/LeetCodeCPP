#include "KthSmallestElementInABst.cpp"
#include "catch.hpp"


TEST_CASE("Kth Smallest Element in a BST, Example 1", "[LeetCode]")
{
	Solution s;
	TreeNode* t2 = new TreeNode(2);
	TreeNode* t1 = new TreeNode(1, nullptr, t2);
	TreeNode* t4 = new TreeNode(4);
	TreeNode* root = new TreeNode(3, t1, t4);
	int k = 1;

	REQUIRE(s.kthSmallest(root, k) == 1);
}

TEST_CASE("Kth Smallest Element in a BST, Example 2", "[LeetCode]")
{
	Solution s;
	TreeNode* t1 = new TreeNode(1);
	TreeNode* t2 = new TreeNode(2, t1, nullptr);
	TreeNode* t4 = new TreeNode(4);
	TreeNode* t3 = new TreeNode(3, t2, t4);
	TreeNode* t6 = new TreeNode(6);
	TreeNode* root = new TreeNode(5, t3, t6);
	int k = 3;

	REQUIRE(s.kthSmallest(root, k) == 3);
}
