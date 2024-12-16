#include <cstdio>
#include <algorithm>
#include <queue>
#include <stdio.h>
using namespace std;

const int N = 100010;
int n, m; // 字符串长度和查询数
char mde[N]; // 输入字符串
int sa[N], rk[2 * N], ht[N]; // 后缀数组、排名数组、LCP数组
int x[N], y[N]; // 排名辅助数组
queue<int> q[N]; // 队列用于后缀数组构建

inline bool cmp(int i, int j) {
    return (x[i] == x[j]) && (y[i] == y[j]);
}

// 后缀数组构建函数
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

// 创建后缀数组
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

// 接下来的函数同样按照上述结构进行重构...

int main() {
    scanf_s("%d%d", &n, &m);
    scanf_s("%s", mde + 1);
    create_sa();
    // 继续调用必要的初始化和处理函数
    return 0;
}
