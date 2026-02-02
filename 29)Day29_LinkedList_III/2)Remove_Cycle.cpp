class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast){//special case
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }return slow; 
        }
    }  return NULL;   //no cycle
}
};

// output:
// Accepted
// Runtime: 3 ms
// Input
// head =
// [3,2,0,-4]
// pos =
// 1
// Output
// tail connects to node index 1
// Expected
// tail connects to node index 1