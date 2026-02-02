class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){
                return true;
            }
        }
        return false;
        
    }
};

// output:
// Accepted
// Runtime: 0 ms
// Input
// head =
// [1]
// pos =
// -1
// Output
// false
// Expected
// false
