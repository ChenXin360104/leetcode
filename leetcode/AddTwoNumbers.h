#pragma once
/**
* Definition for singly-linked list.
*/
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class AddTwoNumbers
{
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

/*
int main()
{
AddTwoNumbers s;

ListNode* l1, *l2, *tmp;
l1 = new ListNode(1);
l2 = new ListNode(9);
tmp = l2;
for (int i = 0; i < 2; i++) {
tmp->next = new ListNode(9);
tmp = tmp->next;
}
ListNode* result = s.addTwoNumbers(l1, l2);
while (result) {
cout << result->val << ',';
result = result->next;
}
cout << endl;
return 0;
}
*/