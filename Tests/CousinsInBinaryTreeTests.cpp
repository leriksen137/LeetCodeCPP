#include "CousinsInBinaryTree.cpp"
#include "catch.hpp"

#include "TreeNode.h"


TEST_CASE("Cousins in Binary Tree, Example 1", "[LeetCode]")
{
	Solution s;
	TreeNode* t4 = new TreeNode(4);
	TreeNode* t3 = new TreeNode(3);
	TreeNode* t2 = new TreeNode(2, t4, nullptr);
	TreeNode* root = new TreeNode(1, t2, t3);
	int x = 4;
	int y = 3;

	REQUIRE(s.isCousins(root, x, y) == false);
}

TEST_CASE("Cousins in Binary Tree, Example 2", "[LeetCode]")
{
	Solution s;
	TreeNode* t5 = new TreeNode(5);
	TreeNode* t4 = new TreeNode(4);
	TreeNode* t3 = new TreeNode(3, nullptr, t5);
	TreeNode* t2 = new TreeNode(2, t4, nullptr);
	TreeNode* root = new TreeNode(1, t2, t3);
	int x = 5;
	int y = 4;

	REQUIRE(s.isCousins(root, x, y) == true);
}

TEST_CASE("Cousins in Binary Tree, Example 3", "[LeetCode]")
{
	Solution s;
	TreeNode* t4 = new TreeNode(4);
	TreeNode* t3 = new TreeNode(3);
	TreeNode* t2 = new TreeNode(2, t4, nullptr);
	TreeNode* root = new TreeNode(1, t2, t3);
	int x = 2;
	int y = 3;

	REQUIRE(s.isCousins(root, x, y) == false);
}
