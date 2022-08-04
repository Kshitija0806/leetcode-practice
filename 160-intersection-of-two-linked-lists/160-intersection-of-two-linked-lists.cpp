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
        unordered_set<ListNode*> st;
        for(ListNode* curr=headA;curr!=NULL;curr=curr->next){
            st.insert(curr);
        }
        
        
        
        for(ListNode *curr1=headB;curr1!=NULL;curr1=curr1->next){
            if(st.find(curr1)!=st.end()){
                return curr1;
            }
        }
        
        return NULL;
    }
};