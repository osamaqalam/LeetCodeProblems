// 207-CourseSchedule.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
	map<int, vector<int>> preMap;
	set<int> visited;

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		for (auto& pre : prerequisites) {
			preMap[pre[0]].push_back(pre[1]);
		}

		for (int i = 0; i < numCourses; i++) {
			if (!dfs(i)) return false;
		}

		return true;
    }

	bool dfs(int course) {
		if (visited.find(course) != visited.end()) return false;
		if (preMap[course].empty()) return true;

		visited.insert(course);
		for (auto pre : preMap[course]) 
			if (!dfs(pre)) return false;
		
		visited.erase(course);
		preMap[course].clear();

		return true;
	}
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
