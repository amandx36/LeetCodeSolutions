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
    ListNode* removeElements(ListNode* head, int val) {

        // if my first node is eleimating value 
        while(head != nullptr && head->val == val){
            head = head->next;
        }

        // if head become empty 
        if(head == nullptr) return nullptr;

        ListNode* previous = head;
        ListNode* temp = head->next;

        while(temp != nullptr){

            if(temp->val == val){
                previous->next = temp->next;
                temp = temp->next;
            }
            else{
                previous = temp;
                temp = temp->next;
            }
        }

        return head;
    }
};