/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
   struct ListNode *temp=head;
   int count=0;
   while(temp!=NULL) {
    temp=temp->next;
    count++; 
    }
   count=(count/2) + 1;
   for(int i=1;i<count;i++) head=head->next;
   return head;
   
}
