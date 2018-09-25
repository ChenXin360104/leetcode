#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class SwapNodesInPairs
{
public:
	ListNode* swapPairs(ListNode* head);
};

/*
int main()
{
SwapNodesInPairs s;

ListNode* l1 = new ListNode(1), *c = l1;
c->next = new ListNode(2);  c = c->next;
c->next = new ListNode(3);  c = c->next;
c->next = new ListNode(4);  c = c->next;
ListNode* result = s.swapPairs(l1);

while (result) {
cout << result->val << ',';
result = result->next;
}
cout << endl;
return 0;
}
*/
