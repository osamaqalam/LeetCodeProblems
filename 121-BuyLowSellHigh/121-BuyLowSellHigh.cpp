// 121-BuyLowSellHigh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
		if (prices.size() < 2) return 0;

        vector<int>::iterator left = prices.begin();
		vector<int>::iterator right = left + 1;

		int maxProfit = 0;

        while (right != prices.end())
        {
            if (*left <= *right) {
                maxProfit = max(maxProfit, *right - *left);
                right++;
            }
            else
                left++;
        }
        
		return maxProfit;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

