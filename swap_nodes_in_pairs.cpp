class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
            ListNode temp(0);
            temp.next=head;
            ListNode* current=&temp;
            while(current->next!=NULL && current->next->next!=NULL)
            {
                    swap(current->next->val,current->next->next->val);
                    current=current->next->next;
            }
            return head;
        
    }
};
