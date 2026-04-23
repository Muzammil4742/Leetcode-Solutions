class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0;
        int l2 = 0; 
        int n = 0;

        // Use temp pointers so original heads are not lost
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        // Count length of list A
        while(tempA)
        {
            l1++;
            tempA = tempA->next;
        }

        // Count length of list B
        while(tempB)
        {
            l2++;
            tempB = tempB->next;
        }

        ListNode* pt1 = headA;
        ListNode* pt2 = headB;

        if(l1 > l2)
        {
            n = l1 - l2;
            while(n)
            {
                pt1 = pt1->next;
                n--;
            }
        }
        else if(l2 > l1)
        {
            n = l2 - l1;
            while(n)
            {
                pt2 = pt2->next;
                n--;
            }
        }

        while(pt1 && pt2)
        {
            // Compare nodes, not values
            if(pt1 == pt2)
            {
                return pt1;
            }
            pt1 = pt1->next;
            pt2 = pt2->next;
        }

        return nullptr;
    }
};