// 79-WordSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <set>
#include <functional>

using namespace std;

class Solution {
public:
	set<pair<int, int>> path;
	int rows, cols;

    bool exist(vector<vector<char>>& board, string word) {
		rows = board.size();
		cols = board[0].size();

		function<bool(int, int, int)> dfs = [&](int i, int r, int c) {

			if (i == word.length()) return true;
			if (r < 0 || c < 0 ||
				r >= rows || c >= cols ||
				path.find({ r,c }) != path.end() ||
				word[i] != board[r][c])
				return false;

			char temp = board[r][c];
			board[r][c] = '*';

			bool res = dfs(i + 1, r - 1, c) ||
				dfs(i + 1, r + 1, c) ||
				dfs(i + 1, r, c - 1) ||
				dfs(i + 1, r, c + 1);

			board[r][c] = temp;

			return res;

			};

		for (int r = 0; r < rows; r++) {
			for (int c = 0; c < cols; c++) {
				if (dfs( 0, r, c)) return true;
			}
		}

		return false;
    }
};

int main()
{
	Solution s;
	vector<vector<char>> board = { {'A','A','A','A','A','A'} ,{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'} };
    std::cout << s.exist(board, "AAAAAAAAAAAAAAa");
}

