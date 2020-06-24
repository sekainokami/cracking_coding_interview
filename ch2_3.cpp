#include "cxxlib.hpp"

// 2.3 Delete Middle Node: Implement an algorithm to delete a node in the middle (Le., any node but the first and last node, not necessarily the exact middle) of a singly linked list, given only access to that node

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
