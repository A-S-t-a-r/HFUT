#include <iostream>
using namespace std;

int main()
{
    int year, month;
    cin >> year >> month;

    if (month < 1 || month > 12)
    {
        cout << "Invalid month" << endl;
        return 1;
    }

    int days;
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            switch ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // 闰年判断
            {
                case 1:
                    days = 29; // 闰年
                    break;
                case 0:
                    days = 28; // 平年
                    break;
            }
            break;
        default:
            days = -1; // 无效月份
            break;
    }

    cout << days << endl;
    return 0;
}