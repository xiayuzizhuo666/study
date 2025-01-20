//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(int N, int M, vector<vector<char>> data) {
//    // �����ĸ�������ƶ�
//    vector<pair<int, int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
//    unordered_map<char, pair<int, int>> teleporters = {
//        {'U', {-1, 0}}, {'D', {1, 0}}, {'L', {0, -1}}, {'R', {0, 1}}
//    };
//
//    // �ҵ����ڵ�λ��
//    int start_x = -1, start_y = -1;
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < M; ++j) {
//            if (data[i][j] == 'O') {
//                start_x = i;
//                start_y = j;
//                break;
//            }
//        }
//        if (start_x != -1) break;
//    }
//
//    // ʹ�ö��н���BFS
//    queue<pair<int, int>> q;
//    q.push({ start_x, start_y });
//    vector<vector<bool>> visited(N, vector<bool>(M, false));
//    visited[start_x][start_y] = true;
//
//    while (!q.empty()) {
//        auto [x, y] = q.front();
//        q.pop();
//
//        // ����ÿ������
//        for (auto [dx, dy] : directions) {
//            int nx = x + dx, ny = y + dy;
//            // ����ڷ�Χ����δ���ʹ�������ͨ�ذ������
//            if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && (data[nx][ny] == '.' || data[nx][ny] == 'U' || data[nx][ny] == 'D' || data[nx][ny] == 'L' || data[nx][ny] == 'R')) {
//                visited[nx][ny] = true;
//                q.push({ nx, ny });
//            }
//        }
//
//        // �����ǰλ���Ǵ����������д���
//        if (teleporters.find(data[x][y]) != teleporters.end()) {
//            auto [dx, dy] = teleporters[data[x][y]];
//            int nx = x + dx, ny = y + dy;
//            // ������ͺ��ڷ�Χ����δ���ʹ�
//            while (nx >= 0 && nx < N && ny >= 0 && ny < M && data[nx][ny] in teleporters && !visited[nx][ny]) {
//                visited[nx][ny] = true;
//                q.push({ nx, ny });
//                if (teleporters.find(data[nx][ny]) != teleporters.end()) {
//                    auto [dx2, dy2] = teleporters[data[nx][ny]];
//                    nx += dx2;
//                    ny += dy2;
//                }
//                else {
//                    break;
//                }
//            }
//        }
//    }
//
//    // Σ��λ�õ�����Ϊ��λ������ȥ�ܵ�����ڵ�λ����
//    int safe_positions = 0;
//    for (int i = 0; i < N; ++i) {
//        for (int j = 0; j < M; ++j) {
//            if (visited[i][j]) {
//                safe_positions++;
//            }
//        }
//    }
//    return N * M - safe_positions;
//}
//
//int main() {
//    vector<vector<char>> pattern = {
//        {'.', '.', '.', '.', '.'},
//        {'.', 'R', 'R', 'D', '.'},
//        {'.', 'U', '.', 'D', 'R'},
//        {'.', 'U', 'L', 'L', '.'},
//        {'.', '.', '.', '.', 'O'}
//    };
//
//    cout << (solution(5, 5, pattern) == 10) << endl;
//    return 0;
//}



#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int solution(int N, int M, vector<vector<char>> data) {
    // �����ĸ�������ƶ�
    vector<pair<int, int>> directions = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
    unordered_map<char, pair<int, int>> teleporters = {
        {'U', {-1, 0}}, {'D', {1, 0}}, {'L', {0, -1}}, {'R', {0, 1}}
    };

    // �ҵ����ڵ�λ��
    int start_x = -1, start_y = -1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (data[i][j] == 'O') {
                start_x = i;
                start_y = j;
                break;
            }
        }
        if (start_x != -1) break;
    }

    // ʹ�ö��н���BFS
    queue<pair<int, int>> q;
    q.push({ start_x, start_y });
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    visited[start_x][start_y] = true;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int x = current.first;
        int y = current.second;

        // ����ÿ������
        for (auto [dx, dy] : directions) {
            int nx = x + dx, ny = y + dy;
            // ����ڷ�Χ����δ���ʹ�������ͨ�ذ������
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && (data[nx][ny] == '.' || data[nx][ny] == 'U' || data[nx][ny] == 'D' || data[nx][ny] == 'L' || data[nx][ny] == 'R')) {
                visited[nx][ny] = true;
                q.push({ nx, ny });
            }
        }
    }


    // Σ��λ�õ�����Ϊ��λ������ȥ�ܵ�����ڵ�λ����
    int safe_positions = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (visited[i][j]) {
                safe_positions++;
            }
        }
    }
    return N * M - safe_positions;
}

int main() {
    vector<vector<char>> pattern = {
        {'.', '.', '.', '.', '.'},
        {'.', 'R', 'R', 'D', '.'},
        {'.', 'U', '.', 'D', 'R'},
        {'.', 'U', 'L', 'L', '.'},
        {'.', '.', '.', '.', 'O'}
    };

    cout << (solution(5, 5, pattern) == 10) << endl;
    return 0;
}
