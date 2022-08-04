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
        ListNode* temp = head;
        ListNode* d = head;
        ListNode* prev = NULL;
        int cnt = 1;
        if(head==NULL || head->next==NULL) return NULL;
        while(temp->next!=NULL){
            if(cnt<n){
                temp = temp -> next;
            }
            else{
                temp = temp -> next;
                prev = d;
                d = d-> next;
            }
            cnt++;
        }
        if(d==head){
            head = head -> next;
            return head;
        }
        else{
            prev -> next = d-> next;
            d-> next = NULL;
            return head;
        
        }
        
    }
};