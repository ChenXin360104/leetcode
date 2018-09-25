#include "stdafx.h"
#include "SwapNodesInPairs.h"

ListNode * SwapNodesInPairs::swapPairs(ListNode * head)
{
	ListNode dummy(0), *before = &dummy , *current = head, *after;
	before->next = head;

	while (current && current->next) {
		after = current->next;
		current->next = after->next;
		after->next = current;
		before->next = after;
		before = current;
		current = current->next;
	}

	ListNode *result = dummy.next;
	return result;
}
