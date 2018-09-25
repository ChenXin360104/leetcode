#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class MergeTwoSortedLists
{
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};

/*
int main()
{
MergeTwoSortedLists s;

ListNode* l1 = new ListNode(1), *c = l1;
c->next = new ListNode(2);  c = c->next;
c->next = new ListNode(4);  c = c->next;
ListNode* l2 = new ListNode(1);
c = l2;
c->next = new ListNode(3);  c = c->next;
c->next = new ListNode(4);  c = c->next;
ListNode* result = s.mergeTwoLists(l1, l2);

while (result) {
cout << result->val << ',';
result = result->next;
}
cout << endl;
return 0;
}
*/