class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == nullptr)
            return nullptr;

        // copying the element 
        Node* dummy = new Node(-1);
        Node* tail = dummy;

        Node* orig_temp = head;

        while (orig_temp != nullptr) {

            Node* newNode = new Node(orig_temp->val);

            tail->next = newNode;
            tail = tail->next;

            orig_temp = orig_temp->next;
        }

        Node* copyHead = dummy->next;

        // handling random solution 
        orig_temp = head;
        Node* copy_temp = copyHead;

        while (orig_temp != nullptr) {

            if (orig_temp->random == nullptr) {
                copy_temp->random = nullptr;
            }
            else {

                Node* target = orig_temp->random;

                Node* temp = head;
                int index = 0;

                while (temp != target) {
                    temp = temp->next;
                    index++;
                }

                Node* copiedTarget = copyHead;

                for (int i = 0; i < index; i++) {
                    copiedTarget = copiedTarget->next;
                }

                copy_temp->random = copiedTarget;
            }

            orig_temp = orig_temp->next;
            copy_temp = copy_temp->next;
        }

        return copyHead;
    }
};