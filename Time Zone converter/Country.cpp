#include "Country.h"
#include "Time.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include < climits >
#include <unordered_map>


Country::Country() : found(false) {}

Country::Country(string paese, Time UTC)
{
    Country::setTimeLine( paese, UTC);
}

void Country::setTimeLine(string paese, Time UTC)
{
    for (int i = 0; i < paese.size(); i++)
    {
        if (paese[i] >= 'A' && paese[i] <= 'Z')
        {
            paese[i] = paese[i] + 32;
        }
    }

    int min_distance = INT_MAX;
    string best_match;

    for (auto it = country.begin(); it != country.end(); it++)
    {
        int distance = Levenstein_Distance(paese, it->first);

        if (distance == 0)
        {
            found = true;
            best_match = it->first;
            break;
        }

        else if (distance < min_distance)
        {
            min_distance = distance;
            best_match = it->first;
        }
    }

    int max_allowedDistance = min(3, max(2, static_cast<int>(paese.size() / 3)));

    if (min_distance <= max_allowedDistance)
    {
        auto it = country.find(best_match);
        found = true;
        stadt = best_match;
        int hour = it->second;
        int newHour = UTC.getHour() + hour;
        timezone = UTC;
        timezone.setHour(newHour);
    }

    else
    {
        cout << " Not valid country name" << endl;
        found = false;
    }
}

string Country::getCountry()
{
    return stadt;
}

Time Country::gettimeZone()
{
    return timezone;
}


void Country::printnewTime()
{
    if (found == true)
    {
        cout << " the local time in " << stadt << " is " << setfill('0') << setw(2) << timezone.getHour() << ":";
        cout << setfill('0') << setw(2) << timezone.getMinute() << ":";
        cout << setfill('0') << setw(2) << timezone.getSecond() << " " << timezone.getmidday() << endl;

        cout << endl;

        cout << "A fun fact: Airplane travelers can be considered time travelers since they journey through both space and time." << endl;
    }

    else {

        return;
    }
}
