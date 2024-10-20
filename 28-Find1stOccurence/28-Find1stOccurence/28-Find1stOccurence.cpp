// 28-Find1stOccurence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length())
            return -1;

        for (int i = 0; i <= haystack.length() - needle.length(); i++)
        {
            if (needle == haystack.substr(i, needle.length()))
                return i;
        }
        
        return -1;
    }
};

int main()
{
    Solution obj;
    string haystack1 = "sadbutsad";
    string haystack2 = "leetcode";
    string haystack3 = "mississippi";
    string needle1 = "sad";
    string needle2 = "leeto";
    string needle3 = "issip";


    cout << obj.strStr(haystack1, needle1) << endl;
    cout << obj.strStr(haystack2, needle2) << endl;
    cout << obj.strStr(haystack3, needle3) << endl;

}
