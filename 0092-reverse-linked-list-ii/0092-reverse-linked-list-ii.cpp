class Solution {
public:

    // reverse linked list
    ListNode* reverseLL(ListNode* head) {

        ListNode* curr = head;
        ListNode* pre = nullptr;
        ListNode* next = nullptr;

        while(curr != nullptr){

            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }

        return pre;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == nullptr || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* a = dummy;
        ListNode* b = nullptr;
        ListNode* c = nullptr;
        ListNode* d = nullptr;

        // move a before left

        for(int i = 1 ; i < left ; i++){
            a = a->next;
        }

        b = a->next;

        // move c to right node

        c = b;

        for(int i = left ; i < right ; i++){
            c = c->next;
        }

        d = c->next;

        // break list

        c->next = nullptr;

        // reverse

        ListNode* e = reverseLL(b);

        // reconnect

        a->next = e;
        b->next = d;

        return dummy->next;
    }
};