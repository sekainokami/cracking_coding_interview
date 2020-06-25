#include "cxxlib.hpp"

// 2.8 Loop Detection: Given a circular linked list, implement an algorithm that returns the node at the beginning of the loop.

ListNode* get_intersect(ListNode* head) {
    
    auto slow = head, fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return slow;
    }
    
    return nullptr;
}

ListNode *detectCycle(ListNode *head) {
    ListNode* intersect = get_intersect(head);
    if (!intersect) return nullptr;
    
    ListNode* x = head;
    ListNode* y = intersect;
    
    while (x) {
        
        if (x == y)
            return x;
        x = x->next;
        y = y->next;

    }
    
    return nullptr;
}