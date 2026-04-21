class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while (temp != nullptr) {
            if (temp->val == val) {
                prev->next = temp->next;  
                temp = temp->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};