#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <algorithm>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

// ListNode
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int _val): val(_val), next(nullptr) {}
};

// TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int _val): val(_val), left(nullptr), right(nullptr) {}
};

// Print a 2D matrix
template <typename T>
void print_matrix(vector<vector<T>> matrix) {
    for (auto & row : matrix) {
        for (auto & e: row) {
            cout << e << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Make a list
ListNode* make_list(const vector<int>& nums) {
    ListNode* head = new ListNode(-1);
    ListNode* curr = head;
    for (auto & x : nums) {
        curr->next = new ListNode(x);
        curr = curr->next;
    }
    return head->next;
}

// Print a list
void print_list(ListNode* head) {
    while (head->next) {
        cout << head->val << "->";
        head = head->next;
    }
    cout << head->val << endl;
}