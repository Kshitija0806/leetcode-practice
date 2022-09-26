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
    void deleteNode(ListNode* node) {
       //If we have to delete a node from middle of linked-list and we are not given head
        //then apply the concept of putting the next value in the node to be deleted and delete the next node
        ListNode* temp=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete temp;
        
    }
};