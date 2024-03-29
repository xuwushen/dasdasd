#include "check.h"
bool isValidDate(int dateInt) {
    int year = dateInt / 10000;
    int month = (dateInt % 10000) / 100;
    int day = dateInt % 100;

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        return false;
    }

    // 简单判断每个月的天数
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return false;
    } else if (month == 2) {
        // 闰年判断
        bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if ((isLeapYear && day > 29) || (!isLeapYear && day > 28)) {
            return false;
        }
    }
    if(dateInt < 19700101 || dateInt >20380200)
    {
        return false;
    }
    return true;
}