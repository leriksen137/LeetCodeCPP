#include "OddEvenLinkedList.cpp"
#include "ListNode.h"
#include "catch.hpp"

#include <vector>


TEST_CASE("Odd Even Linked List, Example 1", "[LeetCode]")
{
	Solution s;
	ListNode* l5 = new ListNode(5);
	ListNode* l4 = new ListNode(4, l5);
	ListNode* l3 = new ListNode(3, l4);
	ListNode* l2 = new ListNode(2, l3);
	ListNode* l1 = new ListNode(1, l2);

	ListNode* result = s.oddEvenList(l1);
	std::vector<int> expected{ 1,3,5,2,4 };
	
	REQUIRE(result->toVector() == expected);
}

TEST_CASE("Odd Even Linked List, Example 2", "[LeetCode]")
{
	Solution s;
	ListNode* l7 = new ListNode(7);
	ListNode* l6 = new ListNode(4, l7);
	ListNode* l5 = new ListNode(6, l6);
	ListNode* l4 = new ListNode(5, l5);
	ListNode* l3 = new ListNode(3, l4);
	ListNode* l2 = new ListNode(1, l3);
	ListNode* l1 = new ListNode(2, l2);

	ListNode* result = s.oddEvenList(l1);
	std::vector<int> expected{ 2,3,6,7,1,5,4 };

	REQUIRE(result->toVector() == expected);
}
