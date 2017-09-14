/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		int carry = 0;
		ListNode* head = new ListNode(0);
		ListNode* p(0);
		ListNode* q(0);
		ListNode* cursor = head;
		p = l1;
		q = l2;
		while (p || q)
		{
			int x = p ? p->val : 0;
			int y = q ? q->val : 0;
			int sum = y + x + carry;
			carry = sum/10;
			cursor->next = new ListNode(sum % 10);
			cursor = cursor->next;
			if (p)
				p = p->next;
			if (q)
				q = q->next;
		}
		if (carry > 0)
			cursor->next = new ListNode(carry);
		return head->next;
	}
};
