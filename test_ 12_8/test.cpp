#include <cstdio>
#include <algorithm>
#include <queue>
#include <stdio.h>
using namespace std;

const int N = 100010;
int n, m; // �ַ������ȺͲ�ѯ��
char mde[N]; // �����ַ���
int sa[N], rk[2 * N], ht[N]; // ��׺���顢�������顢LCP����
int x[N], y[N]; // ������������
queue<int> q[N]; // �������ں�׺���鹹��

inline bool cmp(int i, int j) {
    return (x[i] == x[j]) && (y[i] == y[j]);
}

// ��׺���鹹������
inline void rixs() {
    for (int i = 1; i <= n; i++) {
        q[y[i]].push(i);
    }
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        while (!q[i].empty()) {
            sa[++cnt] = q[i].front();
            q[i].pop();
        }
    }
    for (int i = 1; i <= n; i++) {
        q[x[sa[i]]].push(sa[i]);
    }
    cnt = 0;
    for (int i = 0; i <= n; i++) {
        while (!q[i].empty()) {
            sa[++cnt] = q[i].front();
            q[i].pop();
        }
    }
    rk[sa[1]] = 1;
    for (int i = 2; i <= n; i++) {
        rk[sa[i]] = cmp(sa[i - 1], sa[i]) ? rk[sa[i - 1]] : i;
    }
}

// ������׺����
inline void create_sa() {
    for (int i = 1; i <= n; i++) {
        q[mde[i] - 'a' + 1].push(i);
    }
    int cnt = 0;
    for (int i = 1; i <= 26; i++) {
        while (!q[i].empty()) {
            sa[++cnt] = q[i].front();
            q[i].pop();
        }
    }
    rk[sa[1]] = 1;
    for (int i = 2; i <= n; i++) {
        rk[sa[i]] = (mde[sa[i - 1]] == mde[sa[i]]) ? rk[sa[i - 1]] : i;
    }
    for (int k = 1; k <= n; k *= 2) {
        for (int i = 1; i <= n; i++) {
            x[i] = rk[i];
            y[i] = rk[i + k];
        }
        rixs();
    }
}

// �������ĺ���ͬ�����������ṹ�����ع�...

int main() {
    scanf_s("%d%d", &n, &m);
    scanf_s("%s", mde + 1);
    create_sa();
    // �������ñ�Ҫ�ĳ�ʼ���ʹ�����
    return 0;
}
