#include <iostream>
#include <string>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
    int maxDay;
public:
    Date();             //Default constructor
    Date(int,int,int);  //Overloaded constructor

    bool validate(int, int, int);
    bool checkDay(int, int, int);

    int getDay();
    int getMonth();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    string convertMonth(int);
    void printShortDate();
    void printLongMonthDate();
    void printLongDayDate();
};
