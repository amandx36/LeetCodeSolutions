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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==nullptr) return nullptr ;
        unordered_map<int,int>mp;
        ListNode* dummy = head ;
        while(dummy!=nullptr){
            mp[dummy->val]++;
            dummy = dummy->next ;
        }

        // now iterate to the map and make a another linkedlist 
        vector<int>res;
        for(auto it : mp){
            if(it.second>=2) continue;
            else res.push_back(it.first);
        }

        // now a linked list from the vector 
        sort(res.begin(),res.end());
        int n =  res.size();
         if(n<1) return nullptr ;
        ListNode* newHead = new ListNode(res[0]);
        ListNode* Ndummy = newHead ;
        

        
       
        for(int i = 1 ; i < n ; i++){
            Ndummy->next = new  ListNode(res[i]);
            Ndummy = Ndummy->next ;
        }

        return newHead ;
        
    }
};