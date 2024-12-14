#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    static constexpr int DIRS[4][2] = {
        {0, 1},  // 右
        {1, 0},  // 下
        {0, -1}, // 左
        {-1, 0}  // 上
    };

    int numRookCaptures(vector<vector<char>>& board) {
        const int SIZE = 8;
        int x0 = -1, y0 = -1;

        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (board[i][j] == 'R') {
                    x0 = i;
                    y0 = j;
                    break;
                }
            }
            if (x0 != -1) break; // 找到 R，跳出外层循环
        }

        int ans = 0;

        for (int i = 0; i < 4; i++) {
            int dx = DIRS[i][0];
            int dy = DIRS[i][1];
            int x = x0, y = y0;
            while (0 <= x + dx && x + dx < SIZE && 0 <= y + dy && y + dy < SIZE && board[x + dx][y + dy] == '.') {
                x += dx;
                y += dy;
            }
            if (0 <= x + dx && x + dx < SIZE && 0 <= y + dy && y + dy < SIZE && board[x + dx][y + dy] == 'p') {
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<vector<char>> board = {
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', 'p', '.', '.', '.', '.'},
        {'.', '.', 'R', '.', '.', '.', '.', 'p'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', 'p', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'}
    };

    cout << solution.numRookCaptures(board) << endl; // 输出结果
    return 0;
}
