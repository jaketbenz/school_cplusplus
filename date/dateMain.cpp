#include "Date.h"

int main()
{
    Date day1;                  //New object with no arguments set to default value (1/1/2001)
    Date day2(2,13,2015);       //Overloaded object with a random valid date

    day1.printShortDate();      //Print default object data members
    day1.printLongMonthDate();
    day1.printLongDayDate();

    day2.printShortDate();      //Print overloaded object data members
    day2.printLongMonthDate();
    day2.printLongDayDate();

    Date day3(13,7,2000);       //Test incorrect month value
    Date day4(12,34,2000);      //Test incorrect day value (not between 1-31)
    Date day5(2,29,2001);       //Test incorrect day value (too high for the month)
    Date day6(1,10,-2);         //Test incorrect year value

    day2.setMonth(4);           //Setting new data member values to existing object
    day2.setDay(28);
    day2.setYear(2019);

    day2.printShortDate();      //Print modified object member values
    day2.printLongMonthDate();
    day2.printLongDayDate();

    day2.setMonth(13);          //Set incorrect month value test
    day2.setDay(32);            //Set incorrect day value test
    day2.setYear(-5);           //Set incorrect year value test

    day2.printShortDate();      //Print corrected object member values
    day2.printLongMonthDate();
    day2.printLongDayDate();

    Date day7(2,29,2016);       //Overloaded object set to a valid leap year

    day7.printShortDate();      //Print valid leap year date
    day7.printLongMonthDate();
    day7.printLongDayDate();

    day7.setDay(30);            //Incorrect leap year day test
    Date day8(2,30,2016);

    return 0;
}
