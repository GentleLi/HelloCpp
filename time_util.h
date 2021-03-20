//
// Created by Administrator on 2021/3/18.
//

#include <cstdlib>
#include <cstring>

using namespace std;
#ifndef HELLOCPP_TIME_H
#define HELLOCPP_TIME_H

class Time {
public:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;

    void getTimeStr();

private:
};

void Time::getTimeStr() {
    cout << "输出时间：" << year << "-" << month << "-" << day << " " << hour << ":" << minute << ":" << second << endl;
}

#endif //HELLOCPP_TIME_H
