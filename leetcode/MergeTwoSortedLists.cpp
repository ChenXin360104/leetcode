#include "stdafx.h"
#include "MergeTwoSortedLists.h"

ListNode * MergeTwoSortedLists::mergeTwoLists(ListNode * l1, ListNode * l2)
{
	ListNode *dummy = new ListNode(0), *current = dummy;
	while (l1 && l2) {
		if (l1->val < l2->val) {
			current->next = l1;
			l1 = l1->next;
		}
		else {
			current->next = l2;
			l2 = l2->next;
		}
		current = current->next;
	}
	ListNode *rest = l1 ? l1 : l2;
	while (rest) {
		current->next = rest;
		rest = rest->next;
		current = current->next;
	}
	ListNode *result = dummy->next;
	delete dummy;
	return result;
}
