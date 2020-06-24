#include "cxxlib.hpp"

// 2.2 Return Kth to Last: Implement an algorithm to find the kth to last element of a singly linked list
ListNode* solve(ListNode* head, int k) {
    ListNode* curr = head;
    while (k) {
        curr = curr->next;
        k--;
    }

    ListNode* res = head;
    while (curr) {
        res = res->next;
        curr = curr->next;
    }
    return res;
}



int main() {
    ListNode* head = make_list({1,2,3,4,5,6,7});
    cout << "original: " << endl;
    print_list(head);

    ListNode* res = solve(head,3);
    cout << "result : " << endl;
    print_list(res);
}