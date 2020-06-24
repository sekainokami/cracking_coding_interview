#include "cxxlib.hpp"

// 2.6 Palindrome: Implement a function to check if a linked list is a palindrome.

ListNode* reverse(ListNode* head) {
    if (!head) return head;
    
    ListNode* prev = nullptr;
    while (head) {
        ListNode* curr = new ListNode(head->val);
        curr->next = prev;
        prev = curr;
        head = head->next;
    }
    return prev;
}

bool solve(ListNode* head) {
    ListNode* r = reverse(head);
    ListNode* a = r;
    ListNode* b = head;
    while (a && b) {
        if (a->val != b->val)
            return false;
        a = a->next;
        b = b->next;
    }
    if (a && !b) return false;
    else if (!a && b) return false;
    return true;
}

int main() {
    ListNode* head1 = make_list({1,2,3,2,1});
    print_list(head1);
    if (solve(head1))
        cout << "palindromic" << endl;
    else
        cout << "not palindromic" << endl;
    
    ListNode* head2 = make_list({1,2,3,4,1});
    print_list(head2);
    if (solve(head2))
        cout << "palindromic" << endl;
    else
        cout << "not palindromic" << endl;
}