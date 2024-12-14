
#include <iostream>


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (!head) return nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = head->next;

        while (curr)
        {
            curr->next = prev;
            prev = curr;
            curr = next;

            if (next)
                next = next->next;
        }

        return prev;
    }
};

int main()
{
    ListNode* e = new ListNode(5);
    ListNode* d = new ListNode(4,e);
    ListNode* c = new ListNode(3, d);
    ListNode* b = new ListNode(2, c);
    ListNode* a = new ListNode(1, b);

    Solution obj;

    obj.reverseList(a);

    return 0;
}