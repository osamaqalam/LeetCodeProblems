// 67-AddBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        unsigned long long aInt = binToInt(a);
        unsigned long long bInt = binToInt(b);

        unsigned long res = aInt + bInt;

        return intToBin(res); 
    }

    unsigned long long binToInt(string bin)
    {
        /*int n = bin.length();
        unsigned long long res = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (bin.at(i)=='1')
                res += pow(2, n - 1 - i);
        }*/

        return stoi(bin,0,2);
    }

    string intToBin(unsigned long long n) {
        string binary = "";
        while (n > 0) {
            binary = (n % 2 == 0 ? "0" : "1") + binary;
            n /= 2;
        }
        return binary == "" ? "0" : binary;  // Handle case for n = 0
    }
};

int main()
{
    Solution obj;

    string a1 = "11";
    string b1 = "1";
    string a2 = "1010";
    string b2 = "1011";
    
    cout << obj.addBinary(a1, b1) << endl;
    cout << obj.addBinary(a2, b2) << endl;
}

