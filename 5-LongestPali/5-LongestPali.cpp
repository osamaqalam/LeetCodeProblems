// 5-LongestPali.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
		string res = "";
		int resLen = 0;
	
		for (int i = 0; i < s.size(); i++) {

			// odd length
			int l = i, r = i;
			while (l >= 0 && r < s.size() && s[l] == s[r]) {
				if (r - l + 1 > resLen) {
					res = s.substr(l, r - l + 1);
					resLen = r - l + 1;
				}
				l--;
				r++;
			}

			// even length
			l = i, r = i+1;
			while (l >= 0 && r < s.size() && s[l] == s[r]) {
				if (r - l + 1 > resLen) {
					res = s.substr(l, r - l + 1);
					resLen = r - l + 1;
				}
				l--;
				r++;
			}
		}

		return res;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
