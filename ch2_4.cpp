#include "cxxlib.hpp"

// 2.4 Partition: Write code to partition a linked list around a value x, such that all nodes less than x come before all nodes greater than or equal to x. If x is contained within the list, the values of x only need to be after the elements less than x (see below). The partition element x can appear anywhere in the "right partition"; it does not need to appear between the left and right partitions.

ListNode* solve(ListNode* head, int pivot) {
    ListNode* small = new ListNode(-1);
    ListNode* large = new ListNode(-1);

    ListNode* x = small;
    ListNode* y = large;

    while (head) {
        if (head->val >= pivot) {
            y->next = new ListNode(head->val);
            y = y->next;
        }
        else {
            x->next = new ListNode(head->val);
            x = x->next;
        }
        head = head->next;
    }
    x->next = large->next;
    return small->next;
}

int main() {
    ListNode* head = make_list({3,5,8,5,10,2,1});
    cout << "original: " << endl;
    print_list(head);

    ListNode* res = solve(head,5);
    cout << "result : " << endl;
    print_list(res);
}
