// 767-ReorganizeString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

class MaxHeap {
private:
    vector<pair<char,int>> heap;

    void heapifyUp(int index) {
        if (index && heap[parent(index)].second < heap[index].second) {
            swap(heap[index].second, heap[parent(index)].second);
            heapifyUp(parent(index));
        }
    }

    void heapifyDown(int index) {
        int left = leftChild(index);
        int right = rightChild(index);
        int largest = index;

        if (left < size() && heap[left].second > heap[largest].second)
            largest = left;

        if (right < size() && heap[right].second > heap[largest].second)
            largest = right;

        if (largest != index) {
            swap(heap[index].second, heap[largest].second);
            heapifyDown(largest);
        }
    }

    int parent(int index) { return (index - 1) / 2; }
    int leftChild(int index) { return 2 * index + 1; }
    int rightChild(int index) { return 2 * index + 2; }

public:
    unsigned int size() { return heap.size(); }
    bool empty() { return size() == 0; }

    void insert(int i, char c) {
        heap.push_back(make_pair(i, c));
        heapifyUp(size() - 1);
    }

    void removeMax() {
        if (size() == 0) return;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    pair<int, char> getMax() {
        if (size() == 0) throw out_of_range("Heap is empty");
        return heap.front();
    }
};

class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        MaxHeap maxHeap;

        for (auto& pair : charCount) {
            maxHeap.insert(pair.first, pair.second);
        }

        pair <char, int> prev = make_pair('#', -1);
        string res = "";

        while (!maxHeap.empty() || prev.second != -1)
        {
            if (prev.second != -1 && maxHeap.empty())
                return "";

            pair<char, int> max = maxHeap.getMax();
            maxHeap.removeMax();

            res += max.first;
            int cnt = max.second - 1;

            if (prev.second != -1)
            {
                maxHeap.insert(prev.first, prev.second);
                prev = make_pair('#', -1);
            }
            if (cnt != 0)
                prev = make_pair(max.first, cnt);
        }

        return res;
    }
};

int main()
{
    Solution obj;

    cout << obj.reorganizeString("aab") << endl;
}
