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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>value ;
        ListNode* temp = head ;
        while(temp != nullptr){
            value.push_back(temp->val);
             temp =  temp->next;
        }
        int n = value.size();
        
        swap(value[k-1],value[n-k]);
        
         // rebuilding from vector 
         ListNode* newHead = new ListNode(value[0]);
         ListNode* dummy = newHead;
         for(int i = 1 ; i < n ; i++){
            dummy->next = new ListNode(value[i]);
            dummy  = dummy->next ;
         }

        return newHead ;
    }
};