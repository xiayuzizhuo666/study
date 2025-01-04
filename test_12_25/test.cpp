#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

// ���ڹ���
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // ���ñ���ɫ
        HBRUSH hBrush = CreateSolidBrush(RGB(30, 30, 30));
        FillRect(hdc, &ps.rcPaint, hBrush);
        DeleteObject(hBrush);

        // ��ʥ����
        const int height = 6;
        HBRUSH greenBrush = CreateSolidBrush(RGB(0, 128, 0)); // ��ɫ
        HBRUSH brownBrush = CreateSolidBrush(RGB(139, 69, 19)); // ��ɫ

        // �����Ĳ�
        for (int i = 0; i < height; ++i) {
            // ������
            int width = 2 * i + 1;
            int x = 150 - (width * 10) / 2; // ���л���
            int y = 100 + i * 40;           // ����߻���
            SelectObject(hdc, greenBrush);
            Polygon(hdc, new POINT[4]{
                {x, y},
                {x + width * 10, y},
                {x + (width - 1) * 10, y + 40},
                {x + 10, y + 40}
                }, 4);
        }

        // ������
        SelectObject(hdc, brownBrush);
        Rectangle(hdc, 140, 100 + height * 40, 160, 100 + height * 40 + 30);

        // ������Դ
        DeleteObject(greenBrush);
        DeleteObject(brownBrush);

        // ��װ��
        HBRUSH redBrush = CreateSolidBrush(RGB(255, 0, 0)); // ��ɫ
        SelectObject(hdc, redBrush);
        for (int j = 0; j < height; ++j) {
            Ellipse(hdc, 150 - 3, 100 + j * 40 + 20, 150 + 3, 100 + j * 40 + 26); // ����
            Ellipse(hdc, 110 + j * 10, 100 + j * 40 + 20, 110 + j * 10 + 6, 100 + j * 40 + 26); // ����
            Ellipse(hdc, 190 - j * 10, 100 + j * 40 + 20, 190 - j * 10 + 6, 100 + j * 40 + 26); // ����
        }

        EndPaint(hwnd, &ps);
    }
    return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

// ��������
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
        L"��̬ʥ����",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 400,
        NULL,
        NULL,
        GetModuleHandle(NULL),
        NULL
    );

    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    // ������Ϣѭ��
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

// ������
int main() {
    // ����ʥ��������
    createWindow();
    return 0;
}
