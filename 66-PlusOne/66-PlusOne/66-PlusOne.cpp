// 66-PlusOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // instead of converting the vector to int, adding, then converting back to int, i went with this approch
    // to avoid having to loop twice for every case
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        bool carry = false;

        for (int i = n - 1; i >= 0; i--)
        {
            if (digits.at(i) == 9)
                digits.at(i) = 0;
                
            else
            {
                digits.at(i)++;
                break;
            }
        }

        // in case an extra place needs to be added
        if (digits.at(0) == 0)
        {
            digits.push_back(0);
            digits.at(0) = 1;

            for (int i = n - 1; i >= 2; i--)
                digits.at(i) = digits.at(i - 1);
        }

        return digits;
    }
};

int main()
{
    Solution obj;
    vector<int> digits1 = { 1,2,3 };
    vector<int> digits2 = { 9, 9 };

 
    obj.plusOne(digits1);
    obj.plusOne(digits2);

}

