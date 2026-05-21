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
    ListNode* deleteMiddle(ListNode* head) {

        // overall concepts is save the previous node just before the slow node updates it value 
        if(head->next==nullptr) return nullptr ;

    
    ListNode* previous = head ;
    ListNode* slow = head ;
    ListNode* fast = head ;
    while(fast != nullptr && fast->next != nullptr ){
        previous = slow ;
        slow = slow->next;
        fast = fast -> next -> next ;

    }

    // now delete the middle one element dude 
    previous->next = slow -> next ;
    return head ;



    }
};