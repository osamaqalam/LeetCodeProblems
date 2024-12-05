#include <iostream>

using namespace std;

 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;

        ListNode* curr = head;
        ListNode* next = head->next;

        while (next != nullptr)
        {
            if (curr->val == next->val)
                curr->next = next->next;
            
            else
                curr = next;

            next = curr->next;
        }

        return head;
    }
};

void main()
{
    Solution obj;

    ListNode* e = new ListNode(3);
    ListNode* d = new ListNode(3, e);
    ListNode* c = new ListNode(2, d);
    ListNode* b = new ListNode(1, c);
    ListNode* a = new ListNode(1, b);
    
    obj.deleteDuplicates(a);

    while (a != nullptr)
    {
        std::cout << a->val << endl;
        a = a->next;
    }

}