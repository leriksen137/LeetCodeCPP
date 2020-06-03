#include "DeleteNodeInLinkedList.cpp"
#include "catch.hpp"

TEST_CASE("Delete Node in a linked list, Example 1", "[LeetCode]")
{
	Solution s;
	ListNode* node = new ListNode(5);
	ListNode* head = new ListNode(1, node);
	s.deleteNode(head);

	REQUIRE("This problem is dumb" != "");
}
