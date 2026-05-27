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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

                    // methdo 01   Brute force !!1 

        // string num1;
        // string num2;

        // ListNode* temp = l1;

        // while(temp != nullptr){
        //     num1.push_back(temp->val + '0');
        //     temp = temp->next;
        // }

        // temp = l2;

        // while(temp != nullptr){
        //     num2.push_back(temp->val + '0');
        //     temp = temp->next;
        // }

        // // reversing 
        // reverse(num1.begin(), num1.end());
        // reverse(num2.begin(), num2.end());

        // // string to into 
        // long long n1 = stoll(num1);
        // long long n2 = stoll(num2);

       
        // long long added = n1 + n2;

        // vector<int> res;

        // // edge case
        // if(added == 0){
        //     res.push_back(0);
        // }

        // while(added > 0){

        //     int v = added % 10;

        //     res.push_back(v);

        //     added /= 10;
        // }

        // // creating linked0-list 
        // ListNode* dummy = new ListNode(0);

        // temp = dummy;

        // for(int i = 0; i < res.size(); i++){

        //     temp->next = new ListNode(res[i]);

        //     temp = temp->next;
        // }

        // return dummy->next;

    // method 02 !! !
    
    // create the dummy node 
    ListNode* result = new ListNode(0);
    ListNode* dummy = result ;
    int carry = 0 ;
    int sum = 0 ;
    while(l1 != nullptr ||  l2 != nullptr ){
        sum = carry ;
        if(l1 != nullptr){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }


        // calculate the  carry and sum 
        carry = sum  / 10 ;
        sum = sum % 10 ;
        ListNode* temp = new ListNode(sum);
        dummy->next = temp ;
        dummy = dummy->next ;

        // now check is any available node !!
        

    }
    if(carry == 1 ) {
            ListNode* temp = new ListNode(1);
            dummy -> next = temp ;
            
        }

        return result->next ;



    }
};