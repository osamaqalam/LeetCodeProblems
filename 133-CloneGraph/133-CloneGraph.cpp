// 133-CloneGraph.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
private:
    map<Node*, Node*> graphMap;
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;

        // Node is new not in the map
        if (graphMap.find(node) == graphMap.end())
        {
            Node* clonedNode = new Node(node->val);
            graphMap[node] = clonedNode;
            for (Node* neighbour : node->neighbors)
                clonedNode->neighbors.push_back(cloneGraph(neighbour));
        }

        return graphMap[node];
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

