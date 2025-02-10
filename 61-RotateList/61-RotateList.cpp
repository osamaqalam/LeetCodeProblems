// 61-RotateList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k==0) return head;

        ListNode* front = head;
        ListNode* back  = head;
        int length = 1;
        int realK = k;

        while (front->next)
        {
            front = front->next;
            if (length++ > k)
                back = back->next;
        }

        if (length == 1 || (k!=1 && k > length && length%k == 0) || k%length == 0)
            return head;

        if (k > length)
        {
            int i = 1;
            realK %= length;
            front = head;
            back = head;

            while (front->next)
            {
                front = front->next;
                if (i++ > realK)
                    back = back->next;
            }
        }

        ListNode* newHead = back->next;
        back->next = nullptr;
        front->next = head;

        return newHead;
    }
};

int main()
{
    Solution obj;


    /*ListNode c(2);
    ListNode b(1, &c);
    ListNode a(0, &b);*/

   /* ListNode e(5);
    ListNode d(4, &e);
    ListNode c(3, &d);
    ListNode b(2, &c);
    ListNode a(1, &b);*/

    ListNode b(2);
    ListNode a(1, &b);

    ListNode* ptr = obj.rotateRight(&a, 1);

    while (ptr)
    {
        std::cout << ptr->val;
        ptr = ptr->next;
    }
}