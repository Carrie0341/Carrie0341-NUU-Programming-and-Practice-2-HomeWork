#include <iomanip>
#include <ostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <ctime>
using namespace std;

#ifndef DATE_H
#define DATE_H

class Date // Date class definition; Member functions defined in Line !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
{
public:
    static const unsigned int monthsPerYear{12}; // months in a year
    Date();
    Date(unsigned int, unsigned int, unsigned int);
    Date(unsigned int, unsigned int);
    Date(string, unsigned int, unsigned int);
    Date(const time_t);
    ~Date();                 // provided to confirm destruction order
    string toString() const; // date string in month/day/year format
private:
    unsigned int month;                        // 1-12 (January-December)
    unsigned int day;                          // 1-31 based on month
    unsigned int year;                         // any year
    array<int, monthsPerYear + 1> daysPerMonth{// days in each month
                                               0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const array<string, monthsPerYear + 1> monthsNamePerYear{// name for each month
                                                             "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    void create(unsigned int, unsigned int, unsigned int); // initialize objects in a unified format
    void defaultCreate(const time_t);                      // initialize objects using localtime
    unsigned int checkDay(int) const;                      // utility function to check if day is proper for month and year
    unsigned int toDDD() const;                            // day int in DDD format
    bool isLeapYear(unsigned) const;                       // check leap year
};

#endif
Date::Date()
{
    create(0, 0, 0);
}
Date::Date(unsigned int mm, unsigned int dd, unsigned int yy)
{
    create(mm, dd, yy);
}

Date::Date(unsigned int ddd, unsigned int yy)
{
    if (isLeapYear(yy))              //
        daysPerMonth[2] = 29;        //
    int mm{-1};                      // DDD/YY turn to MM/DD/YY
    while (ddd > daysPerMonth[++mm]) //
        ddd -= daysPerMonth[mm];     //

    create(mm, ddd, yy);
}
Date::Date(string mm, unsigned int dd, unsigned int yy)
{
    bool find = false;                                   //
    for (size_t i = 1; i <= monthsPerYear && !find; i++) //
    {                                                    //
        if (monthsNamePerYear[i] == mm)                  //
        {                                                // find the number of the monthName
            create(i, dd, yy);                           //
            find = true;                                 //
        }                                                //
    }                                                    //

    if (!find)
        create(0, dd, yy); // if not find using month=0 to create
}
Date::Date(const time_t t)
{
    defaultCreate(t);
}

Date::~Date()
{
    cout << "Date object destructor for date \n"
         << toString() << endl;
}
void Date::create(unsigned int mm, unsigned int dd, unsigned int yy)
{
    try
    {
        if (isLeapYear(yy))       //
            daysPerMonth[2] = 29; //
        year = yy;                // try to initialize properties
        month = mm;               //
        day = checkDay(dd);       //
        cout << "Date object constructor for date \n"
             << toString() << endl; // output Date object to show when its constructor is called
    }
    catch (const exception &e)
    {
        cerr << "!! Beacuse " << e.what() << ",use the current time to create this object. !!" << endl;
        defaultCreate(time(0)); // if the initialization fails ,using system time initialize
    }
}
void Date::defaultCreate(const time_t t) //using system time and turning to localtime to initialize
{
    tm *a = localtime(&t);
    create(1 + a->tm_mon, a->tm_mday, 1900 + a->tm_year);
}
string Date::toString() const
{
    ostringstream output;

    output << setw(3) << setfill('0') << toDDD() << " " << year << "\n"
           << setw(2) << month << "/" << setw(2) << day << "/" << year << "\n"
           << monthsNamePerYear[month] << " " << day << ", " << year << endl;

    return output.str();
}

unsigned int Date::toDDD() const
{
    unsigned ddd{day}, index{month};  //
    while (index > 0)                 // DDD/MM => DDD
        ddd += daysPerMonth[--index]; //
    return ddd;                       //
}

unsigned int Date::checkDay(int testDay) const
{
    if (month < 1 || month > monthsPerYear) // validate the month
        throw invalid_argument("month must be 1-12");
    if (testDay > 0 && testDay <= daysPerMonth[month]) // determine whether testDay is valid for specified month
        return testDay;
    if (month == 2 && testDay == 29 && isLeapYear(year)) // February 29 check for leap year
        return testDay;
    throw invalid_argument("Invalid day for current month and year");
}

bool Date::isLeapYear(unsigned year) const
{
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}