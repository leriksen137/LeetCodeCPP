#pragma once
#include <vector>

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}

	std::vector<int> toVector()
	{
		ListNode* head = this;
		std::vector<int> result{};
		while (head)
		{
			result.push_back(head->val);
			head = head->next;
		}
		return result;
	}
};
