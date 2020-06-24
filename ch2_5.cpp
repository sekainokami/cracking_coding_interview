#include "cxxlib.hpp"

// 2.5 Sum Lists: You have two numbers represented by a linked list, where each node contains a single digit. The digits are stored in reverse order, such that the 1's digit is at the head of the list. Write a function that adds the two numbers and returns the sum as a linked list.
// e.g (7->1->6) + (5->9->2) = (2->1->9)

ListNode* solve(ListNode* x, ListNode* y) {
    ListNode* res = new ListNode(-1);
    ListNode* curr = res;

    int carry = 0;
    while (carry || x || y) {
        int a = x ? x->val : 0;
        int b = y ? y->val : 0;
        int s = a + b + carry;
        carry = s / 10;
        s = s % 10;
        curr->next = new ListNode(s);
        curr = curr->next;
        if (x) x = x->next;
        if (y) y = y->next;
    }
    return res->next;
}

int main() {
    ListNode* a1 = make_list({7,1,6});
    ListNode* b1 = make_list({5,9,2});
    ListNode* s1 = solve(a1,b1);
    print_list(s1);

    ListNode* a2 = make_list({9,9,9});
    ListNode* b2 = make_list({1,0,0});
    ListNode* s2 = solve(a2,b2);
    print_list(s2);
}