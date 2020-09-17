#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Insert five digit number: ";
    cin >> number;

    cout << number / 10000 << " ";
    number = number % 10000;
    cout << number / 1000 << " ";
    number = number % 1000;
    cout << number / 100 << " ";
    number = number % 100;
    cout << number / 10 << " ";
    number = number % 10;
    cout << number << endl;
    
    return 0;
}
    
