#include "Time.h"
#include <iostream>
#include <iomanip>
#include <string>


Time::Time() {}

Time::Time(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    if (h >= 0 && h <= 24)
    {
        if (h == 24)
        {
            hour = 0;
            midday = "AM";
        }
        else if (h > 12)
        {
            hour = h - 12;
            midday = "PM";

        }
        else if (h == 0)
        {
            hour = 12;
            midday = "AM";
        }
        else if (h == 12)
        {
            hour = h;
            midday = "PM";
        }

        else
        {
            hour = h;
            midday = "AM";
        }
    }
}

string Time::getmidday()
{
    return midday;
}

int Time::getHour()
{
    return hour;
}

void Time::setMinute(int m)
{
    if (m >= 0 && m <= 59)
    {
        minute = m;
    }
    else
    {
        minute = 0;
    }
}

int Time::getMinute()
{
    return minute;
}

void Time::setSecond(int s)
{
    if (s >= 0 && s <= 59)
    {
        second = s;
    }
    else
    {
        second = 0;
    }
}

int Time::getSecond()
{
    return second;
}

void Time::printTime_info()
{
    cout << " the time is " << setfill('0') << setw(2) << hour << ":";
    cout << setfill('0') << setw(2) << minute << ":";
    cout << setfill('0') << setw(2) << second << " " << midday << endl;
}

