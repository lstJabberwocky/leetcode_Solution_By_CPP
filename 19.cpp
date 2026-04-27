#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}

};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode();
        temp->next = head;
        ListNode* right = temp ;
        ListNode* left = temp ;

        for (int i = 0; i < n; i++)
        {
            right = right->next;
        }
        while (right->next != nullptr)
        {
            right = right->next;
            left = left->next;
        }

        ListNode* DelNode = left->next;
        left->next = DelNode->next;
        delete DelNode;
        return temp->next;

    }
};
