
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode dummy(0);
        ListNode* mergeHead= &dummy;
        while(head1 && head2)
        {
            if(head1->val < head2->val)
            {
                mergeHead->next = head1;
                head1 = head1->next;
            }
            else
            {
                mergeHead->next = head2;
                head2 = head2->next;
            }
            mergeHead= mergeHead->next;
        }
        if(head1)
        {
            mergeHead->next = head1; 
        }
        else
        {
            mergeHead->next = head2;
        }
        return dummy.next;
    }
};