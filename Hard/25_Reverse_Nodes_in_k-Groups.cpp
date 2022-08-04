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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL) return NULL;
        
        ListNode* forward = NULL;
        ListNode* curr  = head;
        ListNode* prev = NULL;
        for(int i =0;i<k;i++){
            if(!curr){
                return head;
            }
            curr = curr -> next;
        }
        curr = head;
        
        int count = 0;
        while(curr !=NULL && count<k){
            forward = curr-> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        
        if(forward!=NULL){
            head -> next = reverseKGroup(forward,k);
            
        }
        
        return prev;
        
        
        
        
    }
};