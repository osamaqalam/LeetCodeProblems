// 200-NumberOfIslands.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

class Solution {
public:
	void bfs(vector<vector<char>>& grid, set<pair<int, int>>& visited, int rows, int cols, int r, int c) {
		queue<pair<int, int>> q;
		pair<int, int> directions[] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

		q.push({ r, c });
		visited.insert({ r, c });

		while (!q.empty()) {
			int row = q.front().first;
			int col = q.front().second;
			q.pop();

			for (auto dir : directions)
			{
				r = row + dir.first;
				c = col + dir.second;

				if (r >= 0 && r < rows && c >= 0 && c < cols && grid[r][c] == '1' && visited.find({ r, c }) == visited.end()) {
					q.push({ r, c });
					visited.insert({ r, c });
				}
			}
		}
	}

    int numIslands(vector<vector<char>>& grid) {
		if (grid.empty()) return 0;

		int islands = 0;
		set<pair<int, int>> visited;
		int rows = grid.size();
		int cols = grid[0].size();

		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				if (grid[r][c] == '1' && visited.find({ r, c }) == visited.end()) {
					bfs(grid, visited, rows, cols, r, c);
					islands++;
				}
			}
		}

		return islands;
    }
		
};

int main()
{
    std::cout << "Hello World!\n";
}
