#include "stdafx.h"
#include "ReverseNodesInKGroup.h"

// recursive solution
ListNode * ReverseNodesInKGroup::reverseKGroup(ListNode * head, int k)
{
	ListNode *afterK = head;
	int i = k;
	while (i && afterK) {
		afterK = afterK->next;
		--i;
	}
	if (i > 0) return head; // list size < k

	ListNode *nextHead = head->next, *after;
	head->next = reverseKGroup(afterK, k);
	while (--k) {
		after = nextHead->next;
		nextHead->next = head;
		head = nextHead;
		nextHead = after;
	}
	return head;
}
