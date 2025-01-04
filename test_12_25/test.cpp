#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

// 窗口过程
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // 设置背景色
        HBRUSH hBrush = CreateSolidBrush(RGB(30, 30, 30));
        FillRect(hdc, &ps.rcPaint, hBrush);
        DeleteObject(hBrush);

        // 画圣诞树
        const int height = 6;
        HBRUSH greenBrush = CreateSolidBrush(RGB(0, 128, 0)); // 绿色
        HBRUSH brownBrush = CreateSolidBrush(RGB(139, 69, 19)); // 棕色

        // 画树的层
        for (int i = 0; i < height; ++i) {
            // 画树层
            int width = 2 * i + 1;
            int x = 150 - (width * 10) / 2; // 居中绘制
            int y = 100 + i * 40;           // 按层高绘制
            SelectObject(hdc, greenBrush);
            Polygon(hdc, new POINT[4]{
                {x, y},
                {x + width * 10, y},
                {x + (width - 1) * 10, y + 40},
                {x + 10, y + 40}
                }, 4);
        }

        // 画树干
        SelectObject(hdc, brownBrush);
        Rectangle(hdc, 140, 100 + height * 40, 160, 100 + height * 40 + 30);

        // 清理资源
        DeleteObject(greenBrush);
        DeleteObject(brownBrush);

        // 画装饰
        HBRUSH redBrush = CreateSolidBrush(RGB(255, 0, 0)); // 红色
        SelectObject(hdc, redBrush);
        for (int j = 0; j < height; ++j) {
            Ellipse(hdc, 150 - 3, 100 + j * 40 + 20, 150 + 3, 100 + j * 40 + 26); // 画球
            Ellipse(hdc, 110 + j * 10, 100 + j * 40 + 20, 110 + j * 10 + 6, 100 + j * 40 + 26); // 画球
            Ellipse(hdc, 190 - j * 10, 100 + j * 40 + 20, 190 - j * 10 + 6, 100 + j * 40 + 26); // 画球
        }

        EndPaint(hwnd, &ps);
    }
    return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

// 创建窗口
void createWindow() {
    const wchar_t CLASS_NAME[] = L"ChristmasTreeWindowClass";

    WNDCLASS wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        L"动态圣诞树",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 400,
        NULL,
        NULL,
        GetModuleHandle(NULL),
        NULL
    );

    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    // 进入消息循环
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

// 主函数
int main() {
    // 创建圣诞树窗口
    createWindow();
    return 0;
}
