class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* temp= head;
      ListNode* prev= nullptr;
      while(temp !=nullptr)
      {
        ListNode* NextNode = temp->next;
        temp->next = prev;
        prev=temp;
        temp = NextNode;
      }
      return prev;
    }
};

