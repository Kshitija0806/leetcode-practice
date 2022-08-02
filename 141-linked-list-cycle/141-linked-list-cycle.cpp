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
    bool hasCycle(ListNode *head) {
        //In he earlier problem we have to destroy the structure of linked list.
        // So to avoid this we can maintain a set od Node* and while iterating see if the upcoming is in the         // set or not.
        
        unordered_set <ListNode*> st;
        
        ListNode* curr=head;
        
        while(curr!=NULL){
            if(st.find(curr)!=st.end()){
                return true;
            }else{
                st.insert(curr);
            }
            curr=curr->next;
        }
        
        return false;
    }
};