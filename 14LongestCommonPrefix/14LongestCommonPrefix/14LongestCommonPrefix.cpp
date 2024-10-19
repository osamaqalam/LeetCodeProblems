// 14LongestCommonPrefix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
 
#include <string> 
#include <vector> 
#include <iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result = "";
        bool breakflag = false;


        for (int charIndex = 0; charIndex < strs.at(0).length(); charIndex++)
        {
            int strIndex = 0;
            while (strIndex < strs.size())
            {
                if (strs.at(strIndex++)[charIndex] != strs.at(0)[charIndex])
                {
                    breakflag = true;
                    break;
                }
            }

            if (breakflag)
                break;

            result += strs.at(0)[charIndex];
        }

        return result;
    }
};

int main()
{
    vector<string> case1 = { "flower","flow","flight" };
    vector<string> case2 = { "a" };

    Solution* obj = new Solution;
    
    std::cout << obj->longestCommonPrefix(case2);
}



