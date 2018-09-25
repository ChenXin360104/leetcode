#include "stdafx.h"
#include "MergeKSortedLists.h"

ListNode * MergeKSortedLists::mergeKLists(vector<ListNode*>& lists)
{
	if (lists.empty())
		return nullptr;

	ListNode *dummy = new ListNode(0), *current = dummy;

	auto comp = [](ListNode* a, ListNode* b) { return a && b ? a->val > b->val : b ? true : false; }; // strict weak ordering, comp(a,a) == false, even when a == null
	priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> q(lists.begin(), lists.end(), comp);
	while (q.top()) {
		ListNode* l = q.top();
		q.pop();
		current->next = l;
		current = current->next;
		q.push(l->next);
	}

	ListNode *result = dummy->next;
	delete dummy;
	return result;
}
