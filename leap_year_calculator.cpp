#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int date;
    
    cout << "Insert a date to see if it's a leap year:" << endl;
    cin >> date;
    if (date >= 1582)
    {
        if ( date % 400 == 0)
        {
            cout << date << " is a leap year." << endl;
        }
        else if ( date % 100 == 0)
        {
            cout << date << " is not a leap year." << endl;
        }
        else if ( date % 4 == 0)
        {
            cout << date << " is a leap year." << endl;
        }
        else
        {
            cout << date << " is not a leap year." << endl;
        }
    }
    else
        cout << date << " is not a leap year." << endl;
    
    return 0;
}
