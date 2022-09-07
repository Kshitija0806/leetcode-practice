/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int total=0;
//         ListNode* curr=head;
//         while(curr!=NULL){
//             total++;
//             curr=curr->next;
//         }
        
//         int prev=total-n;
        
//         //First we have to handle the boundary condition where we have to delete the first node
//         if(n==total){
//             ListNode* temp=head;
//             head=head->next;
//             delete temp;
//             return head;
//         }
//         curr=head;
//         while(n!=0){
//             curr=curr->next;
//             n--;
//         }
        
//        ListNode* temp=curr->next;
//         curr->next=curr->next->next;
//         delete temp;
//         return head;
        
        //Efficient solution:
        ListNode* start=new ListNode();
        start->next=head;
        
        ListNode *slow=start, *fast=start;
        //Now first move fast by n nodes
        for(int i=1;i<=n;++i){
            fast=fast->next;
        }
        
        //Now while fast->next!=NULL move both slow and fast pointers
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete temp;
        
        return start->next;
    }
};