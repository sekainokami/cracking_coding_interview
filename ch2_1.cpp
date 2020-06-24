#include "cxxlib.hpp"

// 2.1 Remove Dups: Write code to remove duplicates from an unsorted linked list.

ListNode* solve(ListNode* head) {
    unordered_set<int> seen;
    ListNode* res = new ListNode(-1);
    ListNode* curr = res;
    while (head) {
        if (seen.count(head->val) == 0) {
            curr->next = new ListNode(head->val);
            curr = curr->next;
            seen.insert(head->val);
        }
        head = head->next;
    }
    return res->next;
}

int main() {
    ListNode* head = make_list({1,4,5,7,6,0,1,2,2,3,4,5});
    cout << "original: " << endl;
    print_list(head);

    ListNode* res = solve(head);
    cout << "result : " << endl;
    print_list(res);
}