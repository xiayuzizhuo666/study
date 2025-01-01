#include <iostream>
#include <vector>
using namespace std;

/********* Begin *********/
class Matrix {
private:
    vector<vector<int>> data; // �洢��������
    int rows; // ��������
    int cols; // ��������

public:
    // ���캯��
    Matrix(int r, int c) : rows(r), cols(c), data(r, vector<int>(c, 0)) {}

    // ȫ����ֵ����
    void Fill(int value) {
        for (auto& row : data) {
            fill(row.begin(), row.end(), value);
        }
    }

    // ָ��λ����ֵ����
    void Set(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        }
    }

    // ��ȡԪ�غ���
    int Get(int r, int c) const { // ���˺�������Ϊconst
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        }
        return 0; // ����0���߿����׳��쳣
    }

    // ��ӡ����
    void Print() const { // ���˺�������Ϊconst
        for (const auto& row : data) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    // ����+�����
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

    // ����-�����
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

    // ����*�����
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