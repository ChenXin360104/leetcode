#pragma once

#include <vector>
#include <queue>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class MergeKSortedLists
{
public:
	ListNode* mergeKLists(vector<ListNode*>& lists);
};

/*
int main()
{
MergeKSortedLists s;

ListNode* l1 = new ListNode(1), *c = l1;
c->next = new ListNode(4);  c = c->next;
c->next = new ListNode(5);  c = c->next;
ListNode* l2 = new ListNode(1);
c = l2;
c->next = new ListNode(3);  c = c->next;
c->next = new ListNode(4);  c = c->next;
ListNode* l3 = new ListNode(2);
c = l3;
c->next = new ListNode(6);  c = c->next;
vector<ListNode*> lists({ l1,l2,l3 });
ListNode* result = s.mergeKLists(lists);

while (result) {
cout << result->val << ',';
result = result->next;
}
cout << endl;
return 0;
}
*/