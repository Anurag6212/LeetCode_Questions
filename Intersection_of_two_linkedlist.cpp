class Solution {
public:
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb)
    {
            ListNode* ptr1 = heada;
            ListNode* ptr2=headb;
            if(ptr1 == NULL || ptr2 == NULL)
            {
                    return NULL;
            }
            while(ptr1!=ptr2)
            {
                    ptr1=ptr1->next;
                    ptr2=ptr2->next;
                    
                    if(ptr1 == ptr2)
                    {
                            return ptr1;
                    }
                    
                    if(ptr1 == NULL)
                    {
                            ptr1 = headb;
                    }
                    
                    if(ptr2 == NULL)
                    {
                            ptr2 = heada;
                    }
                    
                    
            }
        return ptr1;
    }
};
