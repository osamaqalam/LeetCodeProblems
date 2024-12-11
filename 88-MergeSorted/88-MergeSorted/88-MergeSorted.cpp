// 88-MergeSorted.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    void insertIntoSortedVector(std::vector<int>& vec, int value) {
        // Find the correct position to insert the value
        auto it = std::lower_bound(vec.begin(), vec.end(), value);
        // Insert the value at the found position
        vec.insert(it, value);
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        if (n == 0)
            return;

        vector<int>::iterator ptr1 = nums1.begin();
        vector<int>::iterator ptr2 = nums2.begin();
        int temp = 0;

        for (int i = 0; i < m; i++)
        {
            if (*ptr2 <= *ptr1)
            {
                temp = *ptr1;
                *ptr1 = *ptr2;
                //*ptr2 = temp;
                nums2.erase(ptr2); // removing the element we copied into nums1
                insertIntoSortedVector(nums2, temp);
                ptr1++;
                ptr2 = nums2.begin(); // refresh ptr to start after it was deleted
            }

            else
            {
                ptr1++;
            }
        }
        if (nums1.size() == m)
            return;

        for (int i = 0; i < n; i++)
        {
            *ptr1 = *ptr2;
            ptr1++;
            ptr2++;
        }
    }
};

int main()
{
    vector<int> nums1 = { 4,5,6,0,0,0 };
    vector<int> nums2 = { 1,2,3 };
    
    Solution obj;

    obj.merge(nums1, 3, nums2, 3);

    ;
}

