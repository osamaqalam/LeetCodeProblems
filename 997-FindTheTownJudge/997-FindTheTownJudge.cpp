// 997-FindTheTownJudge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int* possibleJudges = new int[n]; // element is 1 if the index is still a possible judge
        int* personCredit = new int[n]; // how many ppl trust the person

        // possibleJudges[0]=1
        for (int i = 0; i < n; i++)
        {
            possibleJudges[i] = 1;
            personCredit[i] = 0;
        }

        for (vector<int> trustPair : trust)
        {
            // handles condition 1: judge trusts nobody
            possibleJudges[trustPair[0] - 1] = -1;

            // increase the credit of a person that is trusted by someone
            personCredit[trustPair[1] - 1]++;
        }

        for (int i = 0; i < n; i++)
        {
            // return the judge that is still a possible judge and has collected enough trust
            if (possibleJudges[i] == 1 && personCredit[i] == n - 1)
                return i + 1;
        }
        return -1;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

