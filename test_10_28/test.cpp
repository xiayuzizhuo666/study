#include <iostream>
#include <string>
int getStrokeCount(char c) {
    if (c == '零') return 13;
    if (c == '一') return 1;
    if (c == '二') return 2;
    if (c == '三') return 3;
    if (c == '四') return 5;
    if (c == '五') return 4;
    if (c == '六') return 4;
    if (c == '七') return 2;
    if (c == '八') return 2;
    if (c == '九') return 2;
}

int main() {
    int n = 0;
    for (int year = 2000; year <= 2024; year++) {
        for (int month = 1; month <= 12; month++) {
            int daysInMonth;
            if (month == 2) {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                    daysInMonth = 29;
                }
                else {
                    daysInMonth = 28;
                }
            }
            else if (month == 4 || month == 6 || month == 9 || month == 11) {
                daysInMonth = 30;
            }
            else {
                daysInMonth = 31;
            }
            for (int day = 1; day <= daysInMonth; day++) {
                std::string date = std::to_string(year) + std::to_string(month) + std::to_string(day);
                int totalStroke = 0;
                for (char c : date) {
                    totalStroke += getStrokeCount(c);
                }
                if (totalStroke > 50) n++;
            }
        }
    }
    std::cout << "练习篮球的天数: " << n << std::endl;
    return 0;
}