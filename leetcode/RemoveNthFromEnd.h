#pragma once
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class RemoveNthFromEnd
{
public:
	ListNode* removeNthFromEnd(ListNode* head, int n);
};

/*
int main()
{
RemoveNthFromEnd s;

ListNode* l = new ListNode(1), *c = l;
for (int i = 2; i < 6; i++) {
c->next = new ListNode(i);
c = c->next;
}
ListNode* result = s.removeNthFromEnd(l, 5);

while (result) {
cout << result->val << ',';
result = result->next;
}
cout << endl;
return 0;
}
*/