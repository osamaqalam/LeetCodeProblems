// 70-ClimbingStairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

class Solution {
public:

    int climbStairs(int n) {
        map<int, int> mem;

        return climbStairs(n, mem);
    }

    int climbStairs(int n,  map<int, int>& mem) {
        // using dynamic programming 
        if (mem.find(n) != mem.end()) return mem[n];
        if (n <= 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;

        mem[n] = climbStairs(n - 1, mem) + climbStairs(n - 2, mem);

        return mem[n];
    }
};

int main()
{
    Solution obj;

    cout << obj.climbStairs(2) << endl;
    cout << obj.climbStairs(3) << endl;
    cout << obj.climbStairs(45) << endl;



}

