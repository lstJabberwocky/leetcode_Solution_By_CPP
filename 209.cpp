#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* createLinkedList(int arr[],int n)
{
    if (n==0) return NULL;

    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for(int i=1;i<n;i++)
    {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
}


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL)
        {
            ListNode* next  = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;

    }
};

int main()
{

}
