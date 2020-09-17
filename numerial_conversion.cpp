#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number;
    int a;
    int b;
    int c;
    int d;
    
    cout << "Enter the whole number less than 4000 you wish to convert:" << endl;
    cin >> number;
    
    a = number / 1000;
    b = (number % 1000) / 100;
    c = ((number % 1000) % 100) / 10;
    d = (((number % 1000) % 100) % 10);
    
    switch (a)
    {
        case 1:
            cout << "M";
            break;
        case 2:
            cout << "MM";
            break;
        case 3:
            cout << "MMM";
            break;
    }
    
    switch (b)
    {
        case 1:
            cout << "C";
            break;
        case 2:
            cout << "CC";
            break;
        case 3:
            cout << "CCC";
            break;
        case 4:
            cout << "CD";
            break;
        case 5:
            cout << "D";
            break;
        case 6:
            cout << "DC";
            break;
        case 7:
            cout << "DCC";
            break;
        case 8:
            cout << "DCCC";
            break;
        case 9:
            cout << "CM";
            break;
    }
    
    switch (c)
    {
        case 1:
            cout << "X";
            break;
        case 2:
            cout << "XX";
            break;
        case 3:
            cout << "XXX";
            break;
        case 4:
            cout << "XL";
            break;
        case 5:
            cout << "L";
            break;
        case 6:
            cout << "LX";
            break;
        case 7:
            cout << "LXX";
            break;
        case 8:
            cout << "LXXX";
            break;
        case 9:
            cout << "XC";
            break;
    }
    
    switch (d)
    {
        case 1:
            cout << "I" << endl;
            break;
        case 2:
            cout << "II" << endl;
            break;
        case 3:
            cout << "III" << endl;
            break;
        case 4:
            cout << "IV" << endl;
            break;
        case 5:
            cout << "V" << endl;
            break;
        case 6:
            cout << "VI" << endl;
            break;
        case 7:
            cout << "VII" << endl;
            break;
        case 8:
            cout << "VIII" << endl;
            break;
        case 9:
            cout << "IX" << endl;
            break;
    }
    return 0;
}
