// 8-atoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
		int i = 0;
		int sign = 1;
		string integer = "";
		while (i < s.size() && s[i] == ' ') {
			i++;
		}
		if (i < s.size() && s[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (i < s.size() && s[i] == '+')
		{
			sign = 1;
			i++;
		}

		while (isdigit(s[i]))
			integer += s[i++];

		long long result = 0;
		long long singedResult = 0;
		 
		int decimal = 1;
		for (int j = 0; j < integer.size(); j++)
		{
			result = result * 10 + (integer[j] - '0');

			singedResult = result*sign;

			if (singedResult > INT_MAX)
				return INT_MAX;
			if (singedResult < INT_MIN)
				return INT_MIN;
		}
		
		return singedResult;
    }
};

int main()
{
	Solution s;
	cout << s.myAtoi("42") << endl;
}
