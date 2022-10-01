/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = l1;
        ListNode *q = l2;
        int counter_l1 = 0, counter_l2 = 0;
        while(p)
        {
            counter_l1++;
            p = p->next;
        }
        while(q)
        {
            counter_l2++;
            q = q->next;
        }
        p = l1;
        q = l2;
        if(counter_l1 > counter_l2)
        {
            int carry = 0;
            while(q)
            {
                p->val = p->val + q->val + carry;
                carry = 0;
                if(p->val > 9)
                {
                    p->val -= 10;
                    carry = 1;
                }
                q = q->next;
                p = p->next;
            }
            while(p)
            {
                p->val += carry;
                carry = 0;
                if(p->val > 9)
                {
                    p->val -= 10;
                    carry = 1;
                }
                q = p;
                p = p->next;
            }
            if(carry)
            {
                p = l1;
                while(p->next)
                    p = p->next;
                p->next = new ListNode(1);
            }
            return l1;
        }
        else
        {
            int carry = 0;
            while(p)
            {
                q->val = p->val + q->val + carry;
                carry = 0;
                if(q->val > 9)
                {
                    q->val -= 10;
                    carry = 1;
                }
                q = q->next;
                p = p->next;
            }
            while(q)
            {
                q->val += carry;
                carry = 0;
                if(q->val > 9)
                {
                    q->val -= 10;
                    carry = 1;
                }
                p = q;
                q = q->next;
            }
            if(carry)
            {
                q = l2;
                while(q->next)
                    q = q->next;
                q->next = new ListNode(1);
            }
            return l2;
        }
    }
};