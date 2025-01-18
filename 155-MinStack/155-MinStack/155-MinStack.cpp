// 155-MinStack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class MinStack {
public:
    vector<int> vals;
    vector<int> mins;

    MinStack() {}

    void push(int val) {
        vals.push_back(val);

        if (mins.size() == 0)
            mins.push_back(val);
        else
            mins.push_back(std::min(mins.at(mins.size() - 1), val));
    }

    void pop() {
        vals.pop_back();
        mins.pop_back();
    }

    int top() {
        return vals.at(mins.size() - 1);
    }

    int getMin() {
        return mins.at(mins.size() - 1);
    }
};

int main()
{
    
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
   // obj->pop();
    int param_3 = obj->top();
    int param_4 = obj->getMin();
 
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */