// 118-PascalTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

        if (numRows >= 1)  pascal.push_back(*new vector<int> {1});
        if (numRows >= 2)  pascal.push_back(*new vector<int>{ 1,1 });

        for (int i = 2; i < numRows; i++)
        {
            vector<int> row;

            row.push_back(1);

            for (int j = 1; j < i; j++)
                row.push_back(pascal.at(i-1).at(j-1)+ pascal.at(i - 1).at(j));

            row.push_back(1);
            pascal.push_back(row);
        }

        return pascal;
    }
};

int main()
{
    Solution obj;

    obj.generate(5);
    ;
}

