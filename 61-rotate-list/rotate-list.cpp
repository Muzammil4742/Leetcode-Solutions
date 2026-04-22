class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // find length
        int n = 0;
        ListNode* t = head;
        while (t) {
            n++;
            t = t->next;
        }

        k = k % n;

        for (int i = 0; i < k; i++) {

            ListNode* temp = head;

            // move to second last node
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }

            // last node
            ListNode* last = temp->next;

            // detach last node
            temp->next = nullptr;

            // move last to front
            last->next = head;
            head = last;
        }

        return head;
    }
};