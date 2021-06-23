class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
            ListNode* slow=head;
            stack<int>st;
            while(slow!=NULL)
            {
                    st.push(slow->val);
                    slow=slow->next;
            }
            while(head!=NULL)
            {
                    int i=st.top();
                    if(head->val==i)return true;
                    st.pop();
                    head=head->next;
            }
            return false;
    }
};
