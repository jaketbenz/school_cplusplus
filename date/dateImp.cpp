#include "Date.h"

Date::Date()    //Default constructor (for no data values entered)
{
    day = 1;
    month = 1;
    year = 2001;
}

Date::Date(int m,int d,int y)   //Overloaded constructor
{
    if(validate(m,d,y)) //Validates object values
    {
        month = m;      //Assigns object values to data members if valid
        day = d;
        year = y;
    }
    else
    {
        month = 1;      //Assigns default values to data members if not valid
        day = 1;
        year = 2001;
    }
}

bool Date::validate(int m, int d, int y)    //Checks date values assigned to the overloaded object
{
    if((m < 0) || (m > 12))                 //Checks if the month entered is between 1-12
    {
        cout << "ERROR: Invalid month entered. Must be between 1-12. Try again." << endl;
        cout << "Default value (1/1/2001) used instead. Correct Format: (mm/dd/yyyy)." << endl << endl;
        return false;
    }

    if((d < 0)||(d > 31))                   //Checks if the day entered is between 1-31
    {
        cout << "ERROR: Invalid day entered. Must be between 1-31. Try again." << endl;
        cout << "Default value (1/1/2001) used instead. Correct Format: (mm/dd/yyyy)." << endl << endl;
        return false;
    }

    if(!checkDay(m,d,y))                    //Checks if the day is within the given month and **CHECKS FOR LEAP YEAR DAY -- BONUS**
    {
        if((m == 2)&&(y % 4 == 0))          //Error only applies on a February leap year
        {
        cout << "ERROR: Invalid day entered. Last day of " << convertMonth(m) << "is " << maxDay << " on a leap year." << endl;
        cout << "Default value (1/1/2001) used instead. Try again." << endl << endl;
        return false;
        }
        cout << "ERROR: Invalid day entered. Last day of " << convertMonth(m) << "is " << maxDay << "." << endl;
        cout << "Default value (1/1/2001) used instead. Try again." << endl << endl;
        return false;
    }

    if(y < 0)                               //Checks if the year is a positive value
    {
        cout << "ERROR: Invalid year entered. Value must be positive. Try again." << endl;
        cout << "Default value (1/1/2001) used instead. Correct Format: (mm/dd/yyyy)." << endl << endl;
        return false;
    }

    else                                    //If the values pass all checks, then it is a valid date
    return true;
}

bool Date::checkDay(int m, int d, int y)
{
    switch(m)
    {
        case 1: maxDay = 31; break;
        case 2: maxDay = 28; break;
        case 3: maxDay = 31; break;
        case 4: maxDay = 30; break;
        case 5: maxDay = 31; break;
        case 6: maxDay = 30; break;
        case 7: maxDay = 31; break;
        case 8: maxDay = 31; break;
        case 9: maxDay = 30; break;
        case 10: maxDay = 31; break;
        case 11: maxDay = 30; break;
        case 12: maxDay = 31; break;
    }

    if((m == 2)&&(y % 4 == 0)){maxDay++;} //Checks if it is a leap year and changes maxDay to 29
    if((d > maxDay)){return false;}
    else
        return true;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

void Date::setDay(int d)
{
    if(validate(month,d,year))
    {
        day = d;
        return;
    }
    else
        month = 1;      //Assigns default values to data members if not valid
        day = 1;
        year = 2001;
        return;
}

void Date::setMonth(int m)
{
    if(validate(m,day,year))
    {
        month = m;
        return;
    }
    else
        month = 1;      //Assigns default values to data members if not valid
        day = 1;
        year = 2001;
        return;
}

void Date::setYear(int y)
{
    if(validate(month,day,y))
    {
        year = y;
        return;
    }
    else
        month = 1;      //Assigns default values to data members if not valid
        day = 1;
        year = 2001;
        return;
}

string Date::convertMonth(int m)    //Converts month values to strings when needed for long date formats
{
    string mText;
    switch (m)
    {
    case 1: mText = "January "; break;
    case 2: mText = "February "; break;
    case 3: mText = "March "; break;
    case 4: mText = "April "; break;
    case 5: mText = "May "; break;
    case 6: mText = "June "; break;
    case 7: mText = "July "; break;
    case 8: mText = "August "; break;
    case 9: mText = "September "; break;
    case 10: mText = "October "; break;
    case 11: mText = "November "; break;
    case 12: mText = "December "; break;
    }
    return mText;
}

void Date::printShortDate()
{
    cout << getMonth() << "/" << getDay() << "/" << getYear() << endl << endl;
    return;
}

void Date::printLongMonthDate()
{
    cout << convertMonth(month) << getDay() << ", " << getYear() << endl << endl;
    return;
}

void Date::printLongDayDate()
{
    cout << getDay() << " " << convertMonth(month) << getYear() << endl << endl;
    return;
}
