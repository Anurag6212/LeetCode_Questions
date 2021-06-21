
//Approach 1 
class Solution {
public:
    int getDecimalValue(ListNode* head, int res = 0) {
        return head ? getDecimalValue(head->next, res * 2 + head->val) : res;
    }
};

// Approach 2
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0;
        while (head) {
            res = res * 2 + head->val;
            head = head->next;
        }
        return res;
    }
};
