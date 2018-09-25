#include "stdafx.h"
#include "RemoveNthFromEnd.h"

ListNode * RemoveNthFromEnd::removeNthFromEnd(ListNode * head, int n)
{
	ListNode *fast, *slow;
	fast = slow = head;
	while (n--)
		fast = fast->next;

	if (!fast) {// when n equals to the size of list
		head = head->next;
		return head;
	}

	while (fast->next) {
		slow = slow->next;
		fast = fast->next;
	}

	slow->next = slow->next->next;
	return head;
}
