#include <iostream>
#include <vector>
using namespace std;

// �˷������������� a �е�ÿ��Ԫ�س������� n�����ؽ������
vector<int> mul(vector<int> a, int n) {
    vector<int> result; // �������
    int carry = 0; // �����ۼƽ�λ
    for (int i = 0; i < a.size() || carry; i++) {
        if (i < a.size()) carry += a[i] * n; // ���㵱ǰλ�� n �ĳ˻�����֮ǰ�Ľ�λ
        result.push_back(carry % 10); // ���˻��ĸ�λ������������
        carry /= 10; // ���½�λ
    }
    return result; // ���ؽ������
}

// �ӷ������������� b ��ÿ��Ԫ�������� n ��ӣ����ؽ������
vector<int> sum(vector<int> b, int n) {
    vector<int> result; // �������
    int carry = 0; // �����ۼƽ�λ
    for (int i = 0; i < b.size(); i++) {
        carry += b[i]; // ���ϵ�ǰλ��ֵ
        if (n) carry += n % 10; // ��� n ��Ϊ������� n �ĵ�ǰλ
        result.push_back(carry % 10); // ���͵ĸ�λ������������
        carry /= 10; // ���½�λ
        n /= 10; // �ƶ��� n ����һλ
    }
    if (carry) result.push_back(carry); // �������н�λ���ӵ����������ĩβ
    return result; // ���ؽ������
}

int main() {
    int n; // ת������ n
    string s; // ��ת���ĸ����� d ��Ϊ�ַ���
    cin >> n >> s; // �������ȡ n �� s

    string numberStr; // �洢ȥ��С�����������ַ���
    int decimalPlaces = 0; // С��������ֵĸ���

    // �Ƴ�С���㣬������ decimalPlaces
    size_t decimalPointIndex = s.find('.');
    if (decimalPointIndex != string::npos) {
        decimalPlaces = s.size() - decimalPointIndex - 1; // С�����λ��
        s.erase(decimalPointIndex, 1); // �Ƴ�С����
    }

    vector<int> a; // �洢���ֵ�������ÿ��Ԫ����һλ����
    // ���ַ��� s ������ת��Ϊ���� a
    for (int i = s.size() - 1; i >= 0; i--)
        a.push_back(s[i] - '0');

    // �� a ���� 2^n
    for (int i = 1; i <= n; i++)
        a = mul(a, 2);

    reverse(a.begin(), a.end()); // ��ת����������Ա�����λ��ʼ����
    int roundingDigit = a[a.size() - decimalPlaces]; // ��ȡ������Ҫ���������λ
    if (roundingDigit >= 5) { // �����Ҫ��������
        vector<int> b(a.begin(), a.end() - decimalPlaces); // ֻ������������
        b = sum(b, 1); // �� b �� 1
        for (int i = b.size() - 1; i >= 0; i--)
            cout << b[i]; // ������
    }
    else { // �������Ҫ��������
        for (int i = 0; i < a.size() - decimalPlaces; i++)
            cout << a[i]; // ֱ��������
    }

    return 0;
}
