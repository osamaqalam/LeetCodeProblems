// 35-SearchInsertPos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }

    int binarySearch(vector<int>& nums, int x, int low, int high) {

        // Repeat until the pointers low and high meet each other
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (x == nums.at(mid))
                return mid;

            if (x > nums.at(mid))
                low = mid + 1;

            else
                high = mid - 1;
        }

        return low; // low as the insert index
    }
};

int main()
{
    Solution obj;
    vector<int> nums1 = { 1,3,5,6 };
    int target1 = 5;
    int target2 = 2;
    int target3 = 7;

    cout << obj.searchInsert(nums1, target1) << endl;
    cout << obj.searchInsert(nums1, target2) << endl;
    cout << obj.searchInsert(nums1, target3) << endl;

}

