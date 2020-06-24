#include "cxxlib.hpp"

// 2.4 Partition: Write code to partition a linked list around a value x, such that all nodes less than x come before all nodes greater than or equal to x. If x is contained within the list, the values of x only need to be after the elements less than x (see below). The partition element x can appear anywhere in the "right partition"; it does not need to appear between the left and right partitions.

ListNode* solve(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
    ListNode* head = make_list({1,2,3,4,5,6});
    cout << "original: " << endl;
    print_list(head);

    ListNode* res = solve(head);
    cout << "result : " << endl;
    print_list(res);
}
