#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>
#include <unordered_map>
#include "Country.h"
#include "Time.h"


using namespace std;


int main()
{

    //    int ora, minu, secondo;
    //
    //    cout << "what's the time now in your country" << endl;
    //    cout << endl;
    //    cout << "enter hour then minutes then second" << endl;
    //
    //    cin >> ora >> minu >> secondo;
    //
    //    Time zone1(ora,minu,secondo);
    //
    Country c;
    //
    //    cout << "enter the city that you are traveling to: ";
    //    string city;
    //
    //    cin.ignore();
    //
    //    getline(cin,city);
    //     cout<<endl;
    //
    //
    //     c.setTimeLine(city,zone1);
    //    c.printnewTime();

    //    cout<<endl;
    //
    //        cout<<endl;

    Time t1(11, 30, 0);
    c.setTimeLine("Kapa Verde iralnd", t1); // Should auto-correct to "cape verde island"
    c.printnewTime();

    cout << endl;

    Time t2(0, 0, 0);

    c.setTimeLine("Wakanda", t2); 
    c.printnewTime();

    cout << endl;

    return 0;
}
