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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr) return head;
        vector<int> res ;
        ListNode* temp = head ;
        while(temp != nullptr){
            res.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0 ;
        int j = 1 ;
        int n = res.size();
        while(j<n){
            swap(res[i],res[j]);
            i+=2;
            j+=2;
        }
        // now make  the linked list 
        ListNode* newHead = new ListNode(res[0]);
        ListNode* dummy  = newHead ;
        for(int i = 1 ; i < n ; i++){
            dummy ->next = new  ListNode(res[i]);
            dummy  = dummy ->next;
        }
        return newHead;
    }
};