#include "cxxlib.hpp"

// 2.7 Intersection: Given two (singly) linked lists, determine if the two lists intersect. Return the intersecting node. Note that the intersection is defined based on reference, not value. That is, if the kth node of the first linked list is the exact same node (by reference) as the jth node of the second linked list, then they are intersecting.

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    unordered_set<ListNode*> seen;
    
    while (headA) {
        seen.insert(headA);
        headA = headA->next;
    }
    
    while (headB) {
        if (seen.count(headB))
            return headB;
        headB = headB->next;
    }
    
    return nullptr;
}