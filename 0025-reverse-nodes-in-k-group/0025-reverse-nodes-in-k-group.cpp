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
    void rv(vector<int>&res , int low , int high){
        while(low<high){
            swap(res[low],res[high]);
            low++;
            high--;
        }

        
    }
    ListNode* reverseKGroup(ListNode* &head, int k) {
        vector<int>ll;
        ListNode* temp = head;
        while(temp!=nullptr){
            int val = temp->val;
            ll.push_back(val);
            temp = temp->next;
        }
        int i = 0 ;
        int j = k-1;
        int n = ll.size();
        while(j<n){
            rv(ll,i,j);
            i+=k;
            j+=k;
        }
        
        int p  =0 ;
        temp= head;
        for(int i = 0 ; i < n ; i++){
            temp->val=ll[p];
            p++;
            temp = temp->next;
        }
        return head;


    }
};