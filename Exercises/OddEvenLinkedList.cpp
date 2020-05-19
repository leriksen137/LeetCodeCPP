#include "ListNode.h"


class Solution
{
public:
	ListNode* oddEvenList(ListNode* head)
	{
		if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
		{
			return head;
		}

		ListNode* even_start = head->next;
		ListNode* odd_start = head;

		ListNode* ptr = head;
		while (ptr->next->next)
		{
			ListNode* temp = ptr->next;
			ptr->next = ptr->next->next;
			ptr = temp;
		}
		ptr->next = nullptr;

		ptr = odd_start;
		while (ptr->next) ptr = ptr->next;
		ptr->next = even_start;
		return odd_start;

		return head;
	}
};
