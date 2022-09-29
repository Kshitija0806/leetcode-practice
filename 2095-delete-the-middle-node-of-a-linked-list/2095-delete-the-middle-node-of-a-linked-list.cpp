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
    ListNode* deleteMiddle(ListNode* head) {
        //Naive solution: Make two traversals. In one traversal count the number of nodes and in second traversal 
        //remove the middle node
        
        //Time :O(n)+O(n)
        
        //Efficient solution: Find middle node by slow and fasy pointer and then remove the middle node by the //replace and delete method
        
        //Corner condition:
        if(head==NULL || head->next==NULL){
            delete head;
            return NULL;
        }
        
        if(head->next->next==NULL){
            delete head->next;
            head->next=NULL;
            return head;
        }
        
        ListNode* slow=head, *fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->val=slow->next->val;
        ListNode* temp=slow->next;
        slow->next=slow->next->next;
        delete temp;
        return head;
        //Now the slow has reached the middle 
    
    }
};