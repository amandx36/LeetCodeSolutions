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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tempA = list1 ; 
        ListNode* tempB = list2 ;
        ListNode* c  = new ListNode(200);
        ListNode* tempc =  c ;

        while(tempA != NULL && tempB != NULL ){
            if (tempA->val <= tempB->val){
                ListNode* t =  new ListNode(tempA->val);
                tempc-> next =  t ;
                tempc =  t ;
                tempA = tempA->next ;

            }
            else{
                ListNode* t = new ListNode(tempB->val) ;
                tempc-> next =  t ;
                tempc = t ;
                tempB  =  tempB-> next ;

            }
        }
        if (tempA == NULL){
            tempc-> next = tempB ;
        }
        else tempc -> next = tempA ;


        return c-> next ;

    }
    
    ListNode* sortList(ListNode* head) {
        // base case !! 
        if (head == NULL || head->next == NULL) return head ;
        ListNode* slow  = head ;
        ListNode* fast =  head ;
        while (fast-> next != NULL && fast->next->next != NULL ){
            slow = slow-> next ;
            fast =  fast->next->next ;

        }
        // now slow has the middle element in case of the odd element  brother and the left middle in the case of the even element !! 

        // now call recursively for merge sort brother !!! 

        // now spiliting the vector in two for the mersage sort broo !!!! 
        ListNode*a  =  head ;
        ListNode*b  = slow-> next  ;
        slow-> next  =  NULL ;

        // NOW CALLING THE FUCNTION FOR SEPRATION BROTEHR !!! 
        a = sortList(a) ;
        b  =  sortList(b);

        // now call the merge fucntion for the calling brother !!! 
        ListNode* c = mergeTwoLists(a , b) ;
        return c  ;
    }
};