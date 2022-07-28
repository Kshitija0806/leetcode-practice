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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     
    

        
        ListNode* curr1, *curr2, *curr;
        curr1=list1, curr2=list2;
        
        if(curr1==NULL){
            return curr2;
        }
        
        if(curr2==NULL){
            return curr1;
        }
        if((curr1->val) > (curr2->val)){
            curr=curr2;
            curr2=curr2->next;
        }else{
            curr=curr1;
            curr1=curr1->next;
        }
        
        ListNode* temp=curr;
        
        while(curr1!=NULL && curr2!=NULL){
            if((curr1->val) < (curr2->val)){
                curr->next=curr1;
                curr=curr->next;
                curr1=curr1->next;
            }else{
                curr->next=curr2;
                curr=curr->next;
                curr2=curr2->next;
            }
        }
        
        while(curr1!=NULL){
            curr->next=curr1;
            curr=curr->next;
            curr1=curr1->next;
        }
        
        while(curr2!=NULL){
            curr->next=curr2;
            curr=curr->next;
            curr2=curr2->next;
        }
        
        return temp;
    }
};