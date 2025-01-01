#include <iostream>
#include <vector>
using namespace std;

/********* Begin *********/
class Matrix {
private:
    vector<vector<int>> data; // 存储矩阵数据
    int rows; // 矩阵行数
    int cols; // 矩阵列数

public:
    // 构造函数
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

    // 全部设值函数
    void Fill(int value) {
        for (auto& row : data) {
            fill(row.begin(), row.end(), value);
        }
    }

    // 指定位置设值函数
    void Set(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        }
    }

    // 获取元素函数
    int Get(int r, int c) const { // 将此函数声明为const
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        }
        return 0; // 返回0或者可以抛出异常
    }

    // 打印函数
    void Print() const { // 将此函数声明为const
        for (const auto& row : data) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    // 重载+运算符
    friend Matrix operator+(const Matrix& m1, const Matrix& m2) {
        if (m1.rows != m2.rows || m1.cols != m2.cols) {
            throw invalid_argument("Matrix dimensions must match for addition.");
        }
        Matrix result(m1.rows, m1.cols);
        for (int r = 0; r < m1.rows; ++r) {
            for (int c = 0; c < m1.cols; ++c) {
                result.Set(r, c, m1.Get(r, c) + m2.Get(r, c));
            }
        }
        return result;
    }

    // 重载-运算符
    friend Matrix operator-(const Matrix& m1, const Matrix& m2) {
        if (m1.rows != m2.rows || m1.cols != m2.cols) {
            throw invalid_argument("Matrix dimensions must match for subtraction.");
        }
        Matrix result(m1.rows, m1.cols);
        for (int r = 0; r < m1.rows; ++r) {
            for (int c = 0; c < m1.cols; ++c) {
                result.Set(r, c, m1.Get(r, c) - m2.Get(r, c));
            }
        }
        return result;
    }

    // 重载*运算符
    friend Matrix operator*(const Matrix& m1, const Matrix& m2) {
        if (m1.cols != m2.rows) {
            throw invalid_argument("Matrix inner dimensions must match for multiplication.");
        }
        Matrix result(m1.rows, m2.cols);
        for (int r = 0; r < m1.rows; ++r) {
            for (int c = 0; c < m2.cols; ++c) {
                int sum = 0;
                for (int i = 0; i < m1.cols; ++i) {
                    sum += m1.Get(r, i) * m2.Get(i, c);
                }
                result.Set(r, c, sum);
            }
        }
        return result;
    }
};

/********* End *********/