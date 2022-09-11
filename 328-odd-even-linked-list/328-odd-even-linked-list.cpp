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
    ListNode* oddEvenList(ListNode* head) {
    //In such problems the simpliest solution is to create two different linked list 
        //for odd and even indices node and  at last merge them.
        if(head==NULL)return head;
        ListNode* even=head->next;
        //But we will have to maintain head pointer of even LL as we have to merge them
        ListNode* evenhead=head->next;
        ListNode* odd=head;
        
        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
        
        odd->next=evenhead;
        return head;
        
    }
};