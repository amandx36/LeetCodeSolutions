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
    int getDecimalValue(ListNode* head) {
        // vector<int>bt;
        // ListNode* dummy = head ;
        // while(dummy != nullptr){
        //     int val = dummy->val;
        //     bt.push_back(val);
        //     dummy =  dummy->next ;
        // }
        // int pwT= 2 ;
        // int n = bt.size();
        // vector<int>base ;
        // base.push_back(1);
        // for(int i  = 1  ; i < n ; i++){
           
        //     base.push_back(pwT);
        //      pwT *= 2 ;

        // }
        // int digit = 0 ;
        // int j = 0 ;
        // for(int i = n - 1 ; i >= 0 ; i--){
        //     digit += base[i] * bt[j];
        //     j++;
        // }
        // return digit ;

    int ans = 0 ;
    while(head){
        ans = ans*2 + head->val;
        head = head->next;
    }
    return ans ;


    }
};