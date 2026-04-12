class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(-1);
        ListNode* curr = ans;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;

        while(t1 || t2){
            int sum = carry;
            if(t1) sum += t1->val;
            if(t2) sum += t2->val;
            ListNode* newNode = new ListNode(sum % 10);
            carry = sum/10;
            curr -> next = newNode;
            curr = curr->next;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
        }

        if(carry){
            ListNode* carryNode = new ListNode(carry);
            curr->next = carryNode;
        }
        return ans->next;
    }
};