#ifndef TIME_H
#define TIME_H
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Time
{

private:
    int hour;
    int minute;
    int second;
    string midday;

public:
    Time();
    Time(int h, int m, int s);
    void setHour(int h);
    string getmidday();
    int getHour();
    void setMinute(int m);
    int getMinute();
    void setSecond(int s);
    int getSecond();
    void printTime_info();

};

#endif