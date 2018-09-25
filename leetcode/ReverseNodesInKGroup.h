#pragma once

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class ReverseNodesInKGroup
{
public:
	ListNode* reverseKGroup(ListNode* head, int k);
};

/*
int main()
{
ReverseNodesInKGroup s;

ListNode* l1 = new ListNode(1), *c = l1;
c->next = new ListNode(2);  c = c->next;
c->next = new ListNode(3);  c = c->next;
c->next = new ListNode(4);  c = c->next;
c->next = new ListNode(5);  c = c->next;
ListNode* result = s.reverseKGroup(l1, 5);

while (result) {
cout << result->val << ',';
result = result->next;
}
cout << endl;
return 0;
}
*/