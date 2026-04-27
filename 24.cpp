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
    ListNode* swapPairs(ListNode* head) {

        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        ListNode* currNode = dummyHead;
        while ( currNode->next != nullptr && currNode->next->next != nullptr)
        {
            ListNode* node1 = currNode->next;
            ListNode* node2 = currNode->next->next;
            ListNode* next = node2->next;

            node1->next = next;
            node2->next = node1;
            currNode->next = node2;

            currNode = node1;


        }
    return dummyHead->next;


    }
};