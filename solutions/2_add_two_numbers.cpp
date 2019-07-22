class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *l3 = new ListNode(0);
        ListNode *l3_head;
        int carry = 0;
        int val;

        l3_head = l3;

        if(l1 == NULL)
        {
            l3_head = l2;
            return l3_head;
        }
        if(l2 == NULL)
        {
            l3_head = l1;
            return l3_head;
        }

        while(l1)
        {
            val = l1->val + l2->val;
            if(val > 9)
            {
                carry = (val/10);
                val = val % 10;
            }
            l3->val += val;
            if(l3->val == 10)
            {
                l3->val = 0;
                carry = 1;
            }
            if(l1->next == NULL && l2->next == NULL && carry == 0)
            {
                break;
            }
            if(l1->next == NULL)
            {
                l1->next = new ListNode(0);
            }
            if(l2->next == NULL)
            {
                l2->next = new ListNode(0);
            }
            l3->next = new ListNode(carry);
            l3 = l3->next;
            l1 = l1->next;
            l2 = l2->next;
            carry = 0;
        }

        return l3_head;
    }
};
