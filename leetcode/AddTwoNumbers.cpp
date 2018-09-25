#include "stdafx.h"
#include "AddTwoNumbers.h"

ListNode * AddTwoNumbers::addTwoNumbers(ListNode * l1, ListNode * l2)
{
	ListNode* result = new ListNode(0), *current = result;
	int num;
	bool carry = false;
	while (l1 && l2) {
		num = l1->val + l2->val;
		if (carry)
			num += 1;
		if (num > 9) {
			current->next = new ListNode(num % 10);
			carry = true;
		}
		else {
			current->next = new ListNode(num);
			carry = false;
		}
		current = current->next;
		l1 = l1->next;
		l2 = l2->next;
	}
	ListNode * rest = l1 ? l1 : l2;
	while (rest) {
		if (carry) {
			num = 1 + rest->val;
			current->next = new ListNode(num % 10);
			carry = num > 9;
		}
		else {
			current->next = new ListNode(rest->val);
		}
		current = current->next;
		rest = rest->next;
	}
	if (carry) {
		current->next = new ListNode(1);
	}
	return result->next;
}
