// 27RemoveElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        int k = n;

        if (n == 0)
            return 0;
        
        for (int i = 0; i < min(n,k)-1; i++)
        {
            if (nums.at(i) == val)
            {
                nums.at(i) = nums.at(k - 1); // Copy last element to the start
                k--; i--;
            }
        }

        //check last element
        if (nums.at(k-1) == val)
            k--;

        return k;
    }
};

int main()
{
    Solution obj;
    vector<int> case1 = { 3,2,2,3 };
    vector<int> case2 = { 0,1,2,2,3,0,4,2 };
    vector<int> case3 = { 1,1 };

    int val1 = 3;
    int val2 = 2;
    int val3 = 1;


    int k = obj.removeElement(case3, val3);
    for (int i : case3)
        cout << i << ",";

    cout << endl << k;
}

