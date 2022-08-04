/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //Now there is another way to use two pointers.
        //First we will find length of list1 ans list2 and difference of l1 and l2.
        
        ListNode* curr1=headA, *curr2=headB;
        
        int l1=0, l2=0;
        
        while(curr1!=NULL){
            l1++;
            curr1=curr1->next;
        }
        
        while(curr2!=NULL){
            l2++;
            curr2=curr2->next;
        }
        
        
        curr1=headA;
         curr2=headB;
        int d;
        if(l1 > l2){
            d=l1-l2;
    
            while(d--){
                curr1=curr1->next;
            }
        }else{
            d=l2-l1;
            while(d--){
                curr2=curr2->next;
            }
        }
        
        while(curr1!=NULL && curr2!=NULL){
            if(curr1==curr2){
                return curr1;
            }
            
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
        
        return NULL;
    }
};