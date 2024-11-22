#include <iostream>
using namespace std;

int main()
{
    int k;
    double Sn = 0.0; // 初始化和
    cout << "请输入一个正整数 k (一般在1到15之间): ";
    cin >> k;

    // 合理范围检查（可选）
    if (k < 1 || k > 15) {
        cout << "请输入一个有效的 k 值，范围应在 1 到 15 之间。" << endl;
        return 1; // 非法输入，返回非零值
    }

    int i; // 定义计数器
    // 无限循环，直到找到满足条件的 i
    for (i = 1; ; i++)
    {
        Sn += 1.0 / i; // 累加调和级数
        if (Sn > k) // 检查是否超过 k
        {
            break;
        }
    }
    cout << i << endl; // 输出满足条件的 i
    return 0;
}
